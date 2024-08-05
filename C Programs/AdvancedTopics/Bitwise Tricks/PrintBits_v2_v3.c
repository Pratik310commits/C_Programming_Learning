/* 
AND with 0 is used to CLEAR
OR with 1 is used to SET
 */

#include <stdio.h>
#include <stdint.h>

/* 
SET_BIT_64
for upto 64BIT Unsigned
left shift 0x1 to the bith position
OR with 1, to set the bit in that position
 */
#define SET_BIT_64(BA, N) BA |= ((uint64_t)0x0000000000000001 << N)

/* 
CLR_BIT_64
for upto 64BIT Unsigned
left shift 0x1 to the bith position
Complement to flip 0s and 1s
Now 0 is in the bit position
AND with 0, to clear the bit in that position
 */
#define CLR_BIT_64(BA, N) BA &= ~((uint64_t)0x0000000000000001 << N)

/* 
IS_BIT_SET_64
Right shift the given number until bit reaches 0th position
AND with 1 to check if true or false
 */
#define IS_BIT_SET_64(BA, N) ((BA >> N) & 0x1)

#define BIT_VALUE_64(BA, N) ((BA >> N) & 0x1)

void PrintBits64(uint64_t num);
void PrintBits64_v3(uint64_t num);
void PrintBin64_v1(long num);

int main()
{
    uint64_t bit_array = 0;
    SET_BIT_64(bit_array, 9);
    SET_BIT_64(bit_array, 25);
    SET_BIT_64(bit_array, 32);
    SET_BIT_64(bit_array, 50);

    printf("V2:\t");
    PrintBits64(bit_array);

    printf("\nV3:\t");

    PrintBits64_v3(bit_array);

    printf("\nV1:\t");

    PrintBin64_v1(bit_array);

    printf("\n=======\n");

    CLR_BIT_64(bit_array, 32);

    printf("\nV2:\t");
    PrintBits64(bit_array);

    printf("\nV3:\t");

    PrintBits64_v3(bit_array);

    printf("\nV1:\t");

    PrintBin64_v1(bit_array);

    printf("\n");

    return 0;
}


void PrintBits64(uint64_t num)
{
    
    for (uint64_t i = 0; i < 64; i++) {
        if (IS_BIT_SET_64(num, i)) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}

void PrintBits64_v3(uint64_t num)
{
    int numBits = sizeof(num) * 8;

    for (uint64_t i = 0; i < numBits; i++) {
        printf("%d", BIT_VALUE_64(num, i));
    }
}

void PrintBin64_v1(long num)
{
    uint64_t i;

    for (i = ((uint64_t)1 << 63); i > 0; i = i / 2) {
        if ((num & i) != 0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}

void PrintBits64_sequence(uint64_t num)
{
    int numBits = sizeof(num) * 8;

    for (uint64_t i = 0; i < numBits; i++) {
        printf("%d", BIT_VALUE_64(num, numBits - 1 - i));
    }
}