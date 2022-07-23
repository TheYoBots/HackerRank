#include <stdio.h>

int main() {
    int a[6],thresh,i,sum=0;
    for(i=0; i<6; i++)
        scanf("%d",&a[i]);
    scanf("%d",&thresh);
    for(i=0; i<6; i++)
    {
        if(a[i]<thresh)
            sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}