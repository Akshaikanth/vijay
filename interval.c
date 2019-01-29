#include <studio.h>
#include<conio.h>
int main()
{
int num,m,n;
printf("Print Odd Numbers in a given range m to n:");
printf("enter the n number");
scanf("%d", &n);
printf("enter the m number");
scanf("%d", &m);
for (num = m; num <= n; num++)
{
if (num % 2 == 1)
{
printf ("%d ", num);
}
}
return0;
}
