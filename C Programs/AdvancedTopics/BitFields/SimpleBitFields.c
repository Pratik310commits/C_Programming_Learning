#include <stdio.h>
#include <stdint.h>

struct
{
    uint16_t IntEnable : 1;
    uint16_t OverFlow : 1;
    uint16_t Carry : 1;
    uint16_t Res1 : 1;
    uint16_t IntPos : 8;
    uint16_t Error : 1;
    uint16_t Res2 : 3;
}StatusRegister;

int main()
{


    return 0;
}