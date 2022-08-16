//pgm to compute water tax using ternary operator,
//if units<100,cost=1per unit
//if units<=500 and>=100 cost is rs.1.5 per unit
//if units>500,cost is 3 per unit

#include<stdio.h>
void main()
{
    int units;
    printf("Enter the no of units:\n");
    scanf("%d",&units);
    float cost;
    cost=units<100 ? 1 : units<=500 && units>=100 ? 1.5 : 3;
    printf("The water tax is %f",cost);
}
