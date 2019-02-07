#include <stdio.h>
int main()
{
int n, n1, rem, res = 0;
printf("Enter the number: ");
scanf("%d", &n);
n1= n;
while (n1 != 0)
{
rem = n1%10;
res= rem*rem*rem;
n1=n/10;
}
if(res == n)
{
printf(" Armstrong number",n);
}
else
{
printf(" Not  Armstrong number",n);
}
}
