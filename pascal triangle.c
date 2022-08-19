#include<stdio.h>
void main()
{
    int i,j,space,n,c;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (space=1;space<n-i;space++)
        {
            printf(" ");
        }
        for (j=0;j<i+1;j++)
        {
            if(i==0 || j==0)
            c=1;
            else
            c=c*(i-j+1)/j;
            printf("%d ",c);
        }
        printf("\n");
    }
}
