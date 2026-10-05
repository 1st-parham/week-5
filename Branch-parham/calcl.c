include <stdio.h>
int main(void) {
   int Num1 = get_int("Enter first number: ");
   int Num2 = get_int("Enter second number: ");
   int Answer = Num1 + Num2;
   printf("The sum of %i and %i is %i\n", Num1, Num2, Answer);
}