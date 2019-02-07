#include<stdio.h>
void main()
{
printf("enter the number to find armstromg");
scanf("%d",&onum);
num=onum;
while(num<=100000)
{
while(num!=0)
{
rem=num%10;
result+=rem*rem*rem;
num=num/10;
}
}
if(num==onum)
{
printf("yes");
}
else
{
printf("no");
}
}
