// All test cases aren't accepted.
// Score: 7.5/10

#include<stdio.h>

int AscOrDes(int a[], int first, int last)
{
    int i;
    for(i=first; i<last; i++)
    {
        if(a[i]>a[i+1])
            return(1);
        else if(a[i]<a[i+1])
            return(2);
    }
    return 0;
}

int main() {
    int a[1000],n,i,big=0,r1,r2;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=a[big])
            big=i;
    }
    r1=AscOrDes(a, 0, big);
    r2=AscOrDes(a, big, n);
    if(r1==2 && r2==1 && big!=0 && big!=n-1)
        printf("True");
    else
        printf("False");
    return 0;
}