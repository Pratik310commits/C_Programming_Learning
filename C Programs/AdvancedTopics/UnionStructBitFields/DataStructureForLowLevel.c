/* 
Learned this during work at Intel
 */

#include <stdio.h>
#include <stdint.h>

void PrintBin16(long num);

typedef struct _STATUS_REGISTER
{
    union 
    {
        struct
        {
            uint16_t IntEnable : 1;
            uint16_t OverFlow : 1;
            uint16_t Carry : 1;
            uint16_t Res1 : 1;
            uint16_t IntPos : 8;
            uint16_t Error : 1;
            uint16_t Res2 : 3;
        };
        uint16_t AsUInt16;
    };
} STATUS_REGISTER, *PSTATUS_REGISTER;
    

int main()
{

    STATUS_REGISTER StatusRegister;
    StatusRegister.AsUInt16 = 0;
    PrintBin16(StatusRegister.AsUInt16);
    printf("\n");
    StatusRegister.IntEnable = 1;

    PrintBin16(StatusRegister.AsUInt16);
    printf("\n");
    return 0;
}

void PrintBin16(long num)
{
    unsigned long i;
    printf("0");
    for (i = 1 << 15; i > 0; i = i / 2) {
        if ((num & i) != 0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}