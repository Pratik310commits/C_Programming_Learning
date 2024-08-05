#include <stdio.h>

/* 
// return type (*ptr_name)(type1, type2...);
 */
void SimpleDisplay();
void DisplayString(char* string);
void DummyFunction(void (*simpleDispPtr)());

int main()
{
    char* str = "String in main";
    DummyFunction(SimpleDisplay);
    
    void (*DispStrFPtr)(char*);
    DispStrFPtr = DisplayString;
    DispStrFPtr(str);
    return 0;
}

void SimpleDisplay()
{
    printf("[%d] %s\n", __LINE__, __FUNCTION__);
}

void DisplayString(char* string)
{
    printf("[%d] %s: %s\n", __LINE__, __FUNCTION__, string, __LINE__);
}

void DummyFunction(void (*simpleDispPtr)())
{
    printf("[%d] %s\n", __LINE__, __FUNCTION__);
    simpleDispPtr();
}

/* 
// return_type (*function_name)(input param1 type)
 */