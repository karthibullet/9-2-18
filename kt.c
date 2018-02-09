#include <stdio.h>
void main() 
{
    int n,a[10],max=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
	return 0;
}
© 2018 GitHub, Inc
