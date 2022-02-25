#include <stdio.h>
#include <conio.h>

void main()
{
    int Num;
    printf("Enter The Num\t");
    scanf("%d", &Num);
    switch (Num)
    {
    case 1:
        printf("This Is Monday");
        break;
    case 2:
        printf("This Is Tuesday");
        break;
    case 3:
        printf("This Is Wednesday");
        break;

    case 4:
        printf("This Is Thursday");
        break;

    case 5:
        printf("This Is Friday");
        break;

    case 6:
        printf("This Is Saturday");
        break;

    case 7:
        printf("This Is Sunday");
        break;
        
    default:
        printf("You Enterd Wrong Wek");
        break;
    }
}
