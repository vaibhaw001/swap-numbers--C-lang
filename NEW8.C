// hello this is my first c program please support and avoid my mistakes
// i am going to be a coder 5 years down the line.

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
