#include<stdio.h>

void main()
{
    int count=1;
    int i,j,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}
