#include <stdio.h>

typedef int* IntPtr;

int main()
{
    IntPtr p;
    int num = 10;
    p = &num;
    printf("Num: %d\n", *p);

    return 0;
}