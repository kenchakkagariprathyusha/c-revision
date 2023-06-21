#include <stdio.h>

int main()
{
    int arr[] = {6, 5, 2, 6, 3, 6};

    int i, key, *ptr;
    ptr = arr; // *ptr is assigned to start of arr[] i.e arr[0] we need to use:
    // ptr = &arr[0] // with the address operator if we want to assign *ptr to a specific index of an array
    // i.e *ptr is arr[0] = 6 (here)
    //     ptr + 1 => *ptr becomes arr[1] = 5 (here)
    printf("%d\n", *ptr);
    key = 2;
    for (i = 0; i < 5; i++)
    {
        if (key == *ptr)
        {
            printf("key found at index\t");
            printf("%d", i);
        }
        ptr++; // we increase the location value by 4 bytes (1 int) thereby traversing the arrays values
    }
    return 0;
}