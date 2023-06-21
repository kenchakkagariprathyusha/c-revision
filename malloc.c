#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr, sum = 0;
  printf("enter number of elements ");
  scanf("%d", &n);

  ptr = (int *)malloc(n * sizeof(int));
  // ptr gets assigned "n" cells of memory

  // if there int memory (left)
  if (ptr == NULL) {
    printf("error! memory cannot be allocated...");
    exit(0);
    // exit program if memory allocation fails
  }
  // we can assign array elements into the pointer
  printf("enter array elements (as many as n) separated by spaces\n");

  for (i = 0; i < n; i++) {
    scanf("%d", ptr + i);
    sum += *(ptr + i); // sum adds the pointers values and its increment over
                       // each iteration of the loop
  }

  printf("sum of the elemets = %d\n", sum);
  free(ptr); // we need to free the memory that we allocated earlier
  return 0;
}