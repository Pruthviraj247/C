#include <stdio.h>
#include <conio.h>

void main()
{
    int Num;
    Num = 10;
    while (Num >= 1)
    {
        if (Num % 2 == 0)
            printf("%d Is Even Number", Num);
        printf("\n");
        Num--;
    }
}
