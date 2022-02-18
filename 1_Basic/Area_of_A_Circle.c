#include<stdio.h>
#include<conio.h>

void main()
{
    float Radius,Area;
    printf("Enter Radius: ");
    scanf("%f",&Radius);
    Area = 3.14 * Radius * Radius;
    printf("Area Of Circle Is: %0.2f",Area);

}