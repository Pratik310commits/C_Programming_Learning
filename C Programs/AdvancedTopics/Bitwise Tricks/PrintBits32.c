#include <stdio.h>

void PrintBin32(long);

int main()
{
    long num = 5;
    printf("num: %ld\t\t", num);
    PrintBin32(num);
    printf("\n");

    printf("~num: %ld\t", ~num);
    PrintBin32(~num);
    printf("\n");

    printf("-num: %ld\t", -num);
    PrintBin32(-num);
    printf("\n");

    return 0;
}

void PrintBin32(long num)
{
    unsigned long i;
    printf("0");
    for (i = 1 << 31; i > 0; i = i / 2) {
        if ((num & i) != 0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}