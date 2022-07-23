// All test cases aren't accepted.
// Score: 8/10

#include<stdio.h>

int main()
{
    int a[1000],i,j=0,n,zero=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            zero+=1;
    }
    if(zero!=0)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                j=i;
                break;
            }
            printf("%d ",a[i]);
        }
        for(i=n-1; i>=j; i--)
        {
            if(a[i]!=0)
                printf("%d ",a[i]);
        }
        for(i=0; i<zero; i++)
            printf("0 ");
    }
    else
    {
        for(i=0; i<n; i++)
            printf("%d",a[i]);
    }
    return 0;
}