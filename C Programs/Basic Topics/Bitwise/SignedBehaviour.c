#include <stdio.h>
#include<stdint.h>

#define BIT_VALUE_64(BA, N) ((BA >> N) & 0x1)

void PrintBits16_v3(int32_t num);

int main()
{
    int32_t second = -1;
    printf("Number: %d\n\t", second);
    PrintBits16_v3(second);

    //~
    second = ~second;
    printf("~Number:\n\t");
    PrintBits16_v3(second);
    
    printf("\n--------------\n");

    second = ~second;
    printf("Number:\n\t");
    PrintBits16_v3(second);
    
    printf("\n--------------\n");

    //~
    second = ~second;
    printf("~Number:\n\t");
    PrintBits16_v3(second);
    
    printf("\n--------------\n");

    int32_t third = -3;
    printf("Number: %d\n\t", third);
    PrintBits16_v3(third);

    //^
    third = third ^ third;
    printf("Number ^ Number:\n\t");
    PrintBits16_v3(third);
    
    printf("\n--------------\n");
    
}

void PrintBits16_v3(int32_t num)
{
    int numBits = sizeof(num) * 8;

    for (uint16_t i = 0; i < numBits; i++) {
        printf("%d", BIT_VALUE_64(num, numBits - 1 - i));
    }
    printf("\n");
}