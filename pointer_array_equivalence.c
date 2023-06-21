#include <stdio.h>

int main() {

  int num[] = {4, 7, 2, 9, 3};
  int *ptr;
  int i = 0;
  ptr = num;
  num[i] = *(ptr + i) = ptr[i];
  printf("the array elements are: ");
  for (i = 0; i < 5; i++) {
    printf("%d %d", ptr[i], num[i]);
  }
  printf("\nsize of num = %d\n", sizeof(num));
  printf("size of ptr = %d", sizeof(ptr));

  return 0;
}