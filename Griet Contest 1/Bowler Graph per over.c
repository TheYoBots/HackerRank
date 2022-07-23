#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],i,sum=0;
    float avg;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            printf("Wrong input!! Runs cannot be negative!!");
            exit(0);
        }
        sum=sum+a[i];
        avg=(float)sum/10;
    }
    for(i=0; i<10; i++)
    {
        if(a[i]>0)
        {
            for(i=0; i<a[0]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[1]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[2]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[3]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[4]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[5]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[6]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[7]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[8]; i++)
            {
                printf("H");
            }
            printf("\n");
            for(i=0; i<a[9]; i++)
            {
                printf("H");
            }
            printf("\n"); // Can definately be a lot smaller
        }
        else
            printf(" ");
    }
    printf("Average runs given by bowler: %.1f",avg);
    return 0;
}