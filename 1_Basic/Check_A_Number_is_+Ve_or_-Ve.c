#include <stdio.h>
#include <conio.h>

void main()
{
    int Num;
    printf("Enter The Value");
    scanf("%d", &Num);
    if (Num > 0)
        printf("+Ve Number");
    else
        printf("-Ve Number");
}