#include <stdio.h>

void DemoFunction();
void AnotherDemoFunction(int lineNumber, const char *callerFuncName);

int main()
{
    printf("Function: %s(), Line: %d\n", __FUNCTION__, __LINE__);
    DemoFunction();
    AnotherDemoFunction(__LINE__, __FUNCTION__);
}

void DemoFunction()
{
    printf("Function: %s(), Line: %d\n", __FUNCTION__, __LINE__);
}

void AnotherDemoFunction(int lineNumber, const char *callerFuncName)
{
    printf("Function: %s(), Line: %d, invoked from %s() @ line %d\n", __FUNCTION__, __LINE__, callerFuncName, lineNumber);
}