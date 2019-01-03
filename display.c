#include <stdio.h>
int main() 
{
int n,m,i;
int count=0;
scanf("%d,%d",&m,&n);
for(i=m;i<=n;i++)
{
 if(i%2!=0)
 {
  printf("%d",i);
 }
}
}
