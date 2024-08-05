#include <stdio.h>

int main()
{
    int gg = 69;
    // Have to define value at declaration
    int * const c_ptr = &gg;
    
    int dd = 89;
    *c_ptr = 56;
    printf("Address: %p, Value: %d\n", c_ptr, gg);
    // c_ptr = &dd; // this is a compiler error
    return 0;
}

/* 
// <type of pointer> * const <name of pointer>
 */