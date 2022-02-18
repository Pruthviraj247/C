#include <stdio.h>
#include <conio.h>

void main()
{
    int Year;
    printf("Enter The Year: ");
    scanf("%d",&Year);
    if (Year%4 ==0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}