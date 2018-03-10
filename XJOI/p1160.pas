program ex01;
var
        a:array[1..10000]of longint;
        i,j,n,x:longint;
begin
        readln(n);
        for i:=1 to n do read(a[i]);
        for i:=1 to n do
                for j:=1 to n-i do
                  if a[j]>a[j+1] then
                        begin
                                x:=a[j];
                                a[j]:=a[j+1];
                                a[j+1]:=x;
                        end;
        for i:=1 to n do
        write(a[i],' ');
end.
