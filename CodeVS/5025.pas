{
作者:方舟
题目:p5025 [JL] 大建兰帝国之传说十班的故事
}
var s:ansistring;

      i:longint;

begin

  read(s);

  for i:=1 to length(s) do

  begin

    if (s[i]='5')and(s[i+1]='2')and(s[i+2]='0') then 

    begin

      write('yes.');

      halt;

    end

  end;

  write('no');

end.
{
//如何写一份可以提交的代码？以P1000 A+B为例
var a, b:longint; //定义两个变量名
begin
  readln(a,b); //从标准输入流中输入两个整数
  writeln(a+b); //输出到标准输出流中
end.
// 完成程序以后，点击下方的提交，即可看到测试结果
}
