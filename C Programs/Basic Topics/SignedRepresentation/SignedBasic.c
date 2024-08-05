#include <stdio.h>
#include <stdint.h>

#define BIT_VALUE_64(BA, N) ((BA >> N) & 0x1)

void PrintBits32_v3(int8_t num);

int main()
{
    int8_t num = 0;
    // i has to be UINT16, because with UINT8, it keeps overflowing and becomes an endless loop
    for(uint16_t i = 0; i <= 255; i++)
    {
        printf("%u\t", i);
        PrintBits32_v3(i);
        printf("\t%d\t", num);
        PrintBits32_v3(num++);
        printf("\n");
    }
    return 0;
}

void PrintBits32_v3(int8_t num)
{
    int numBits = sizeof(num) * 8;

    for (uint32_t i = 0; i < numBits; i++) {
        printf("%d", BIT_VALUE_64(num, numBits - 1 - i));
    }
    
}