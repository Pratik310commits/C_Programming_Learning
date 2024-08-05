#include <stdint.h>
#include <stdio.h>


#define GET_BIT(BA, N) ((BA >> N) & 0x1)
int main()
{
    uint32_t example = 76; //0100 1100

    printf("Bit 2: %u\n", ((example >> 2) & 0x1));

    printf("Bit 9: %u\n", GET_BIT(example, 7));
    return 0;
}