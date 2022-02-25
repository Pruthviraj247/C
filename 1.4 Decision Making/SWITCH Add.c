// Program to create a menu for Arithmetic operation
#include <stdio.h>
#include <conio.h>
void main()
{
  int choice, a, b;
  printf("\n1. Addition");
  printf("\n2. Subtraction");
  printf("\n3. Multiplication");
  printf("\n4. Exit");
  printf("\n\nEnter Your Choice : ");
  scanf("%d", &choice);
  if (choice <= 3)
  {
    printf("Enter Two numbers: ");
    scanf("%d%d", &a, &b);
  }
  switch (choice)
  {
  case 1:
    printf("\nAddition is : %d", a + b);
    break;
  case 2:
    printf("\nSubtraction is : %d", a - b);
    break;
  case 3:
    printf("\nMultiplication is : %d", a * b);
    break;
  case 4:
    // exit(0);
  default:
    printf("Wrong Choice.....\n");
  }
  getch();
}
