#include <stdio.h>
#include <conio.h>

void main()
{
    int Num;
    printf("Enter The Value");
    scanf("%d",&Num);
    if (Num%2 == 0)
        printf("Is Even Number");
    else
        printf("Is Odd Number");
}