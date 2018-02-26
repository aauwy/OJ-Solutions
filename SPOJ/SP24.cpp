//SP24 FCTRL2 - Small factorials
#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
#include <algorithm>
using namespace std;

class BigNum
{
	string table[101];
	string numToStr(int n)
	{
		if (0 == n) return "0";
		string s;
		while (n)
		{
			s.push_back(n % 10 + '0');
			n /= 10;
		}
		reverse(s.begin(), s.end());
		return s;
	}
public:
	BigNum()
	{
		table[0] = "0", table[1] = "1";
		for (int i = 2; i < 101; i++)
		{
			table[i] = bigMultiply(numToStr(i), table[i-1]);
		}
		cout<<endl;
	}

	string bigMultiply(string a, string b)
	{
		if (a.empty() || b.empty() || '0' == a[0] || '0' == b[0]) return "0";
		string c(a.size() + b.size(), '0');	
		for (int i = a.size() - 1; i >= 0 ; i--)
		{
			int carry = 0;
			int an = a[i]-'0';
			for (int j = b.size() - 1; j >= 0 ; j--)
			{
				int bn = b[j] - '0';
				int sum = an * bn + carry + c[i+j+1] - '0';
				carry = sum / 10;
				c[i+j+1] = sum % 10 + '0';
			}
			if (carry) c[i] += carry;
		}
		if (c.size() && '0' == c[0]) c.erase(c.begin());
		return c;
	}

	void SmallFactorialRun()
	{
		int T = 0, N = 0;
		cin>>T;
		while (T--)
		{
			cin>>N;
			assert(0<N && N<101);
			cout<<table[N]<<endl;
		}
	}
};

int main()
{
	BigNum bgn;
	bgn.SmallFactorialRun();	
	return 0;
}
