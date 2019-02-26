#include<stdio.h>
int main()
{
int n,i,arr[n];
clrscr();
printf("Enter the no.of elements:\n");
scanf("%d\n",&n);
printf("Enter number %d:\n",i+1)
scanf("%d\n",arr[i]);
for(i=1;i<=n;i++)
{
if(arr[0]<arr[i])
{
arr[0]=arr[i];
}
printf("The maximun element is %d:\n",arr[0]);
}
return 0;
}
