#include <stdio.h>
int main()
{
    char c = 'z';
    char *p = &c; // "p points to c"

    printf("%d\n", c);  // 122 (in decimal) is the data in c
    printf("%d\n", &c); // 6422299 (memory address value of c)
    printf("%d\n", *p); // also 122 with is the data in c i.e since p points to c, P = same address of c and *p has value of c
    printf("%d\n", p);  // p contains the address of c
    printf("%d\n", &p); // the address of p itself is not relevant here
    return 0;
}