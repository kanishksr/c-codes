#include<stdio.h>
int max;
int maxi(int num1,int num2)
{
   if (num1>num2)
   max=num1;
   else
   max=num2;
return max;
}
void main()
{
    int i,n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    max=maxi(n1,n2);
    while(1)
    {
        if(max%n1==0 && max%n2==0)
        break;
        else
        ++max;
    }
    printf("LCM of %d and %d is %d",n1,n2,max);
}
