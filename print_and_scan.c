#include <stdio.h>

int main()
{
    int sum, A = 10, B = 20;
    // all of these are ints, sum is not initalized to any value here
    // printf(A); //we cannot print like this we need format specifiers to print variables
    // printing uninitialized variables gives us a zero (global) or garbage values (local) acc to c std
    printf("%d\n", A);

    printf("Enter value for A\n");
    scanf("%d", &A); // we need to use by reference here
    //"Functions that need to modify variables in the caller must receive references (or pointers) to those variables as arguments. Otherwise arguments are passed by value, and the called function receives only a copy of the value"
    sum = A + B;
    printf("the sum is %d", sum);
    return 0;
}