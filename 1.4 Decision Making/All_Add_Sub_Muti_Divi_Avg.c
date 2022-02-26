#include <stdio.h>
#include <conio.h>

void main()
{
    int Num, Num1, Num2, Total;
    printf("Press 1 For Addition (+)");
    printf("\n");
    printf("Press 2 For Subtraction (-)");
    printf("\n");
    printf("Press 3 For Multiplication (*)");
    printf("\n");
    printf("Press 4 For Addition (/)");
    printf("\n");
    printf("Press 5 For Addition (x¯)");
    printf("\n");
    printf("Enter Here: ");
    scanf("%d", &Num);
    printf("Enter The 1st Value");
    scanf("%d", &Num1);
    printf("Enter The 2nd Value");
    scanf("%d", &Num2);
    switch (Num)
    {
    case 1:
        printf("Your Addition Is: %d", Num1 + Num2);
        break;
    case 2:
        printf("Your Subtraction Is: %d", Num1 - Num2);
        break;
    case 3:
        printf("Your Multiplication Is: %d", Num1 * Num2);
        break;
    case 4:
        printf("Your Division Is: %d", Num1 / Num2);
        break;
    case 5:
        printf("Your Average Is: %d", (Num1 + Num2) / 2);
        break;
    }
}
