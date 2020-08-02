#include <stdio.h>
void main() {
       int first, second, temp;
       clrscr();
       printf("enter first number: ");
       scanf("%d", &first);
       printf("enter second number: ");
       scanf("%d", &second);

       temp = first;

       first = second;

       second = temp;

       printf("\nAfter swapping, firstNumber = %d\n", first);
       printf("After swapping, secondNumber = %d\n", second);
       getch();
       }