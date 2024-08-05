#include <stdio.h>

int main()
{
    const int gg = 69;
    // Have to define value at declaration
    int * ptr = &gg;
    
    int dd = 89;
    *ptr = 56; // This is a NOT compiler error
    // Value of const can be changed through pointer
    printf("Address: %p, Value: %d\n", ptr, gg);
    ptr = &dd;
    *ptr = 44;
    printf("Address: %p, Value: %d\n", ptr, dd);

    const int * c_ptr = &gg;
    // *c_ptr = 22;  // This is a compiler error
    c_ptr = &dd; // This is a NOT compiler error
    // Address stored in pointer can be changed
    return 0;
}

/* 
// const <type of pointer> * <name of pointer>
 */