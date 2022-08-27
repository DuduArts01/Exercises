#include <stdio.h>


int main() {
  int factorial(int x);
  int number, result;

  printf("Enter a number interger:  ");
  scanf("%i", &number);
  result = factorial(number);

  printf("The factorial is %i", result);

  
  return 0;
}

int factorial(int x) {
  return (x == 0) ? x = 1 : x * factorial(x - 1); //Recursive function, one function calls the same function inside it


}
