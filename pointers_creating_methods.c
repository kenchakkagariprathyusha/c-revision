#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr;   // initialzed ptr
    ptr = &num; // the location of num is now = ptr

    int num1 = 10;
    int *ptr1 = &num1; // ptr1 now points to the location of num1 i.e
    // the *ptr1 = value of num1 and ptr1 is location of num1

    // therefor both methods are actually the same

    printf("%d\n", *ptr);
    printf("%d\n", *ptr1);

    printf("%d\n", num);
    printf("%d", num1);
    return 0;
}