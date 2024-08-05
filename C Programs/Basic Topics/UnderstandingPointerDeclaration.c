#include <stdio.h>

int main()
{
    printf("Basic Types:\n");
    printf("\tint *ptr: ptr is a pointer to an integer\n");
    printf("\tint ptr[SIZE]: ptr is an array (of length SIZE) of integers\n");
    printf("\nAdvanced/Complex Types:\n");
    printf("\tint *ptr[SIZE]: ptr is an array (of length SIZE) that stores pointers to integers i.e. ptr is an array of integer pointers\n");
    printf("\tint (*ptr)[SIZE]: ptr is pointer to an array (of length SIZE) that stores integers i.e. ptr is pointer to an array of integers\n");
    return 0;
}