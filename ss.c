
#include<stdio.h>
void main()
{
int a[100],n,i,j,temp;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
i=i%2;
printf("%d",a[i]);
