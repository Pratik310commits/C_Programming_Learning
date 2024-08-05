#include <stdio.h>

int main()
{
    int* arrOfPtr1[5];

    printf("int* arrOfPtr1[5]: Here arrOfPtr1 is an array of length 5, consisting of pointers to int\n");
    printf("Since they are pointers, we need to make them NULL instead of having dangling dagerous pointers\n");
    
/* 
    printf("But let's just try and print the addresses and value at those addresses\n");
    // this causes segmentation fault
    for(int index = 0; index < 5; index++)
    {
        printf("arrOfPtr1[%d]: Address: %u, Value: %u\n", index, arrOfPtr1[index], *(arrOfPtr1[index]));
    }
    */ 
    for(int index = 0; index < 5; index++)
    {
        arrOfPtr1[index] = NULL;
        printf("arrOfPtr1 is the base aadress if the array, hence arrOfPtr1[index] means the value at index, which is an address\n");
    }
    for(int index = 0; index < 5; index++)
    {
        printf("arrOfPtr1[%d]: (Address stored) %u\n", index, arrOfPtr1[index]);
    }
    return 0;
}