#include <stdio.h>
#include <conio.h>

void main()
{
    int Num, Count;
    Count = 1;
    printf("Enter The Number");
    scanf("%d", &Num);
    while (Count <= 10)
    {
        /* code */
        printf("%d X %d = %d", Num, Count, Num * Count);
        printf("\n");
        Count++;
    }
}
