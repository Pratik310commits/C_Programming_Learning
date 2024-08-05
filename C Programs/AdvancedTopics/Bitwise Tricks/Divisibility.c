#include <stdio.h>

void PrintBin32(long);

int main()
{
    long num = 44;
    printf("num: %ld\n", num);
    int temp;
    for(int i = 0; i <= num; i++)
    {
        printf("%d\t", i);
        PrintBin32(i);
        //// Divisible by 2
        temp = (i & (0xFF << 1U));
        printf("\t|\t");
        printf("%d\t", temp);
        PrintBin32(temp);
        //// Divisible by 4
        temp = (i & (0xFF << 2U));
        printf("\t|\t");
        printf("%d\t", temp);
        PrintBin32(temp);
        // printf("\n");
        //// Divisible by 8
        temp = (i & (0xFF << 3U));
        printf("\t|\t");
        printf("%d\t", temp);
        PrintBin32(temp);
        printf("\n");

    }

    return 0;
}

void PrintBin32(long num)
{
    unsigned long i;
    printf("0");
    for (i = 1 << 8; i > 0; i = i / 2) {
        if ((num & i) != 0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}