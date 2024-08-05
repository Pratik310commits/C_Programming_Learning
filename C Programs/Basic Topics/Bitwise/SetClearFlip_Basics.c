#include <stdio.h>
#include<stdint.h>

#define BIT_VALUE_64(BA, N) ((BA >> N) & 0x1)

void PrintBits16_v3(uint16_t num);

int main()
{
    uint16_t first = 0;
    uint16_t mask = (0x01 << 4);
    // Set 4th Bit
    printf("Number:\n\t");
    PrintBits16_v3(first);

    printf("Mask (4th):\n\t");
    PrintBits16_v3(mask);
    first = first | mask;
    printf("Number | Mask:\n\t");
    PrintBits16_v3(first);
    
    printf("\n--------------\n");
    // Set 12th Bit
    printf("Number:\n\t");
    PrintBits16_v3(first);

    printf("Mask (12th):\n\t");
    mask = (0x01 << 12);
    PrintBits16_v3(mask);
    first = first | mask;
    printf("Number | Mask:\n\t");
    PrintBits16_v3(first);
    
    printf("\n--------------\n");
    
    // Clear 4th Bit
    printf("Number:\n\t");
    PrintBits16_v3(first);

    printf("Mask (~4th):\n\t");
    mask = ~(0x01 << 4);
    PrintBits16_v3(mask);
    first = first & mask;
    printf("Number & Mask:\n\t");
    PrintBits16_v3(first);
    
    printf("\n--------------\n");

    uint16_t second = 0;
    printf("Number:\n\t");
    PrintBits16_v3(second);

    //~
    second = ~second;
    printf("~Number:\n\t");
    PrintBits16_v3(second);
    
    printf("\n--------------\n");

    second = ~second;
    printf("Number:\n\t");
    PrintBits16_v3(second);

    printf("Mask (12th):\n\t");
    mask = (0x01 << 12);
    PrintBits16_v3(mask);
    second = second | mask;
    printf("Number | Mask:\n\t");
    PrintBits16_v3(second);
    
    printf("\n--------------\n");

    //~
    second = ~second;
    printf("~Number:\n\t");
    PrintBits16_v3(second);
    
    printf("\n--------------\n");

    uint16_t third = 3;
    printf("Number:\n\t");
    PrintBits16_v3(third);

    //^
    third = third ^ third;
    printf("Number ^ Number:\n\t");
    PrintBits16_v3(third);
    
    printf("\n--------------\n");

    third = 3;
    printf("Number:\n\t");
    PrintBits16_v3(third);

    //Number ^ Mask
    mask = 4;
    printf("Mask :\n\t");
    PrintBits16_v3(mask);
    third = third ^ mask;
    printf("Number ^ mask:\n\t");
    PrintBits16_v3(third);
    
    printf("\n--------------\n");
    printf("Number:\n\t");
    PrintBits16_v3(third);
    printf("Mask :\n\t");
    PrintBits16_v3(mask);
    third = third ^ mask;
    printf("Number ^ mask:\n\t");
    PrintBits16_v3(third);
    
}

void PrintBits16_v3(uint16_t num)
{
    int numBits = sizeof(num) * 8;

    for (uint16_t i = 0; i < numBits; i++) {
        printf("%d", BIT_VALUE_64(num, numBits - 1 - i));
    }
    printf("\n");
}