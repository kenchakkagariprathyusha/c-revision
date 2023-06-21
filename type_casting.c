#include <stdio.h>

int main() {

  float float1 = 1.25f;

  int i;
  i = (int)float1;
  // float1's value has been converted to int then assigned to
  // i (which was already of int data type)

  printf("%d %f\n", i, float1);

  float1 = (int)float1;
  // we cannot directly change the type by reassigning
  // the type casted variable to the same variable  in this
  // case we will simply lose precision as it rounds down

  printf("%d %f", i, float1);

  // GCC has a function that can be used to check types
  if (__builtin_types_compatible_p(typeof(float1), float)) {
    printf("\nfloat1 is of type float!");
  } else {
    printf("\nfloat1 is not a float!!");
  }
  if (__builtin_types_compatible_p(typeof(i), int)) {
    printf("\ni is of type int!\n");
  } else {
    printf("\ni is not an int!!\n");
  }

  return 0;
}