#include <stdio.h>
#include <conio.h>

void main()
{
    int Num;
    printf("---------------Welcome To Our Mall---------------");
    printf("\n");
    printf("Enter Your Amount And See Your Discount: ");
    scanf("%d", &Num);
    if (Num >= 50000)
        printf("You Will Be Get 10% Discount");

    else if (Num >= 40000)
        printf("You Will Be Get 8% Discount");

    else if (Num >= 20000)
        printf("You Will Be Get 6% Discount");

    else if (Num >= 10000)
        printf("You Will Be Get 2% Discount");

    else
        printf("Sorry You Don't Get Any Discount");
}
