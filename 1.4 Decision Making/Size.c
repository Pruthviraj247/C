// program to show the use of the sizeof() operator
#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    int num;
    float per;
    double x;

    printf("\nMemory Required for Character Datatype : %d Byte", sizeof(ch));
    printf("\nMemory Required for Integer Datatype : %d Byte", sizeof(num));
    printf("\nMemory Required for Float Datatype : %d Byte", sizeof(per));
    printf("\nMemory Required for Double Datatype : %d Byte", sizeof(x));
}
