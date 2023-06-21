#include <stdio.h>
// arrays using pointers
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int *ptr = &arr[0];

    printf("array elements are: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}