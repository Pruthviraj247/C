#include <stdio.h>
#include <conio.h>

void main()
{
    int Num1, Num2, Temp;
    printf("Enter The Number 1: ");
    scanf("%d", &Num1);
    printf("Enter The Number 2: ");
    scanf("%d", &Num2);
    printf("\n\nBefore Swapping\n\n");
    printf("Num1 = %d", Num1);
    printf("\nNum2 = %d", Num2);
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
    printf("\n\nAfter Swapping\n");
    printf("\nNum1 = %d", Num1);
    printf("\nNum2 = %d", Num2);
}
