#include <stdio.h>
#include <conio.h>

void main()
{
    int Num;
    printf("Enter The Month Number\t");
    scanf("%d", &Num);
    switch (Num)
    {
    case 1:
        printf("This Is Junuary");
        break;
    case 2:
        printf("This Is February");
        break;
    case 3:
        printf("This Is March");
        break;

    case 4:
        printf("This Is April");
        break;

    case 5:
        printf("This Is May");
        break;

    case 6:
        printf("This Is June");
        break;

    case 7:
        printf("This Is July");
        break;
    case 8:
        printf("This Is August");
        break;

    case 9:
        printf("This Is Setember");
        break;

    case 10:
        printf("This Is October");
        break;

    case 11:
        printf("This Is November");
        break;

    case 12:
        printf("This Is December");
        break;

    default:
        printf("You Enterd Wrong Month");
        break;
    }
}
