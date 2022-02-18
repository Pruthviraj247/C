#include <stdio.h>
#include <conio.h>

void main()
{
    char Ch;
    int Num;
    float Per;
    printf("Enter The Character ");
    scanf("%c ", &Ch);
    printf("Enter The Number ");
    scanf("%d ", &Num);
    printf("Enter The Percentage ");
    scanf("%f ", &Per);
    printf("\nYou Are Entered....\n");
    printf("Value of Character:%c\n", Ch);
    printf("Value of Number: %d\n", Num);
    printf("Value of Per:%0.2f\n", Per);
}