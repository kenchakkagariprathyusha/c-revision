#include <stdio.h>
//done by praveennn
///hii
lkjhgf
//dlfhjdjd
lkjhgfl
fytftftftyfy


int main() {
  int myNumbers[] = {25, 5, 6, 12, 0, 2};

  printf("%d\n", myNumbers[0]); // we need to loop over the indices to print all
                                // the elements in the int array

  char yes[] = {"hello world\n"};
  printf("%s", yes); // char array example to store strings also char arrays aka
                     // strings work differently than int arrays
  char name[] = {"a"};
  printf("name pls?\n");
  scanf("%s",
        &name); // white space terminates the scanf. we have more arguably more
                // complicated methods to accommodate the white spaces
  printf("%s", name);
  return 0;
}