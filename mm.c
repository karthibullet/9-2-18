
#include <stdio.h>

int main(void) {
    int num,a[1000],i,t,m;
    printf("enter total numbers");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        for(m=1;m<num;m++)
        {
            if(a[i]>a[m])
            {
                t=a[m];
                a[m]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<num;i++)
    printf("%d\t",a[i]);


	return 0;
}
