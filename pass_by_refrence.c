#include <stdio.h>

void swapNum(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
  // function  parameters need to be pointers to do pass
  //  by reference in the call instance
}

int main(void) {

  int a = 10;
  int b = 20;

  swapNum(&a, &b);
  // use with address operator (&) in the function call

  printf("A is %d and B is %d\n", a, b);
  // use just the variable (no need of * or & for print statements)
  return 0;
}