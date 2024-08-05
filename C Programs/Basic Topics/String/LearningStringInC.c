#include <stdio.h>


int main()
{
    printf("%s\n\n\n", __FILE__);
    char *charPtr = "Char pointer for string";
    printf("[%d] Displaying string with a char*: %s\n", __LINE__, charPtr);

    char charArr[] = "Char array as string";
    printf("[%d] Displaying char array string as string: %s\n", __LINE__, charArr);

    char charArr2[] = {'c', 'h', 'a', 'r', ' ', 'a', 'r', 'r', 'a', 'y', '\0'};
    printf("[%d] Displaying char array as string: %s\n", __LINE__, charArr2);

    printf("[%d] Displaying char array using loop: ", __LINE__);
    int index = 0;
    while(charArr2[index] != '\0')
    {
        printf("%c", charArr2[index++]);
    }
    printf("\n");

    char (*ptrCharArr)[11]; // = {'c', 'h', 'a', 'r', ' ', 'a', 'r', 'r', 'a', 'y', '\0'};
    ptrCharArr = &charArr2;

    printf("[%d] Displaying char array with a pointer to array of char: %s\n", __LINE__, *ptrCharArr);

    char (*ptrCharArr2)[11] = &(char [11]){'c', 'h', 'a', 'r', ' ', 'a', 'r', 'r', 'a', 'y', '\0'};
    
    printf("[%d] Displaying char array with a pointer to array of char: %s\n", __LINE__, *ptrCharArr2);

    printf("[%d] Displaying char array with a pointer to array of char using loop: ", __LINE__);
    index = 0;
    while((*ptrCharArr2)[index] != '\0')
    {
        printf("%c", (*ptrCharArr2)[index++]);
    }

    printf("\n\n(Refer to PointerToArrayAdv.c.c, for more explanation of Pointer to Array)");
}

/* 
{11,2,3,5,6} is an initializer list, it is not an array, so you can't point at it. An array pointer needs to point at an array, that has a valid memory location.
https://stackoverflow.com/questions/17850998/initializing-a-pointer-to-an-array-of-integers
 
Refer to PointerToArrayAdv.c.c, for more explanation of Pointer to Array
 
 */