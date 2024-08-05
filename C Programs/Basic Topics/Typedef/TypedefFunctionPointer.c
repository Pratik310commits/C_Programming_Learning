#include <stdio.h>

void DummyPrint();
void SimplePrint();

typedef void (* fPtr)();

int main()
{
    fPtr pDummyPrint, pSimplePrint;
    pSimplePrint();
    pDummyPrint();
    return 0;
}

void DummyPrint()
{
    printf("[%d] %s\n", __LINE__, __FUNCTION__);
}

void SimplePrint()
{
    printf("[%d] %s\n", __LINE__, __FUNCTION__);
}