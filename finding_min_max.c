#include <stdio.h>

// finding max and min in an array

int main() {
  int arr[] = {4, 7, 1, 9, 3};
  int i, *ptr;

  i = 0;
  ptr = arr; // ptr = arr[0]

  int min, max;
  min = max = arr[0];

  max = *(ptr + i); // ptr + i points to max (max is assigned arr[0]) where prt
                    // is address of arr[0] and i is initialized to zero. i.e
                    // max and *(ptr + i) hold the value of the first element

  for (i = 0; i < 5; i++) {
    if (*(ptr + i) > max) // we are increasing the value of i so the value
                          // assigned to he pointer is the next element
    {
      max = *(ptr + i); // we are assigning max the higher value on comparing to
                        // next element
    }
    if (*(ptr + i) < min) {
      min = *(ptr + i); // we are assigning min to the lower value on comparing
                        // to the next element
    }
  }
  printf("Max = %d and Min = %d ", max, min);

  return 0;
}