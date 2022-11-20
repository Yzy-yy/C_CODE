//if判断斐波那契数
/*#include <stdio.h>
int fib(int input){
	if(input<=2){
		return 1;
}
	return fib(input - 1)+fib(input - 2);
}
void main(){
int input =0;
scanf("%d",&input);
printf("第%d位斐波那契数为:%d\n",input,fib(input));
}*/

//for循环实现斐波那契数
/*#include <stdio.h>
int fib(int input){
int f1=1,f2=1,f3=1;
for(int i=2;i<input;i++)
{
f3=f1+f2;
f1=f2;
f2=f3;
}
return 3;
}
void main()
{
int input=0;
scanf("%d",&input);
printf("第%d位斐波那契数为:%d\n",input,fib(input));
}*/

//while实现斐波那契数
#include <stdio.h>
int fib(int input){
int f1=1,f2=1,f3=1;
while(input>2){
f3=f1+f2;
f1=f2;
f2=f3;
input--;
}
return f3;
}
void main(){
int input =0;
scanf("%d",&input);
printf("第%d位斐波那契数为:%d\n",input,fib(input));
}