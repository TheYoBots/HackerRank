#include<stdio.h>

int find_index(int arr[], int n, int K)
{
    for(int i=0; i<n; i++)
        if(arr[i]==K)
            return i;
        else if(arr[i]>K)
            return i;
    return n;
}

int main() {
    int arr[100],n,i,K;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    scanf("%d",&K);
    printf("%d",find_index(arr, n, K));
    return 0;
}