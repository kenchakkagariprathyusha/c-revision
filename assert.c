#include <assert.h>
#include <stdio.h>

void analyze(char *, int); // prototype
                           // we  should declare it here if we are define it
                           // after main and yet call it in main

int main(void) {
  char *string = "";
  int length = 3;

  analyze(string, length);
  printf("The string %s is not null or empty, "
         "and has length %d \n",
         string, length);
}

void analyze(char *string, int length) {
  assert(string != NULL);  /* cannot be NULL */
  assert(*string != '\0'); /* cannot be empty */
  assert(length > 0);      /* must be positive */
}
