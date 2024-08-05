#include <stdio.h>

int main()
{
    int *intPtr;
    int age = 69;

    intPtr = &age;
    printf("Age: %d (%d)\n", *intPtr, age);

    int ageArr[3] = {1, 2, 3};
    int *intPtr2 = (int *)(&ageArr);

    for(int index = 0; index < 3; index ++)
    {
        printf("ageArr[%d]: %d (%d) (%d)\n", index, *(intPtr2 + index), ageArr[index], intPtr2[index]);
    }
    
    printf("ageArr[index]: ageArr is the base address of the array, hence ageArr[index] means value at address given by \"ageArr + index\" combined\n");
    printf("intPtr2[index]: intPtr2 is the address of the first element, hence intPtr2[index] means value at address given by \"intPtr2 + index\" combined\n");
    printf("*(intPtr2 + index): intPtr2 is the address of the first element, hence *(intPtr2 + index) means value at address given by \"intPtr2 + index\" combined\n");
    printf("\"intPtr2[index]\" essentially is \"*(intPtr2 + index)\"\n");
    printf("\nageArr[index] = intPtr2[index] = *(intPtr2 + index)\n");
    return 0;
}