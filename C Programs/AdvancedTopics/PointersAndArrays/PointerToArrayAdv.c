// C program to demonstrate
// pointer to an array.

#include <stdio.h>

const int SIZE = 3;

int main()
{
    int i;
	// Pointer to an array of five numbers
	int(*ptrToArr)[5];

	int b[5] = { 1, 2, 3, 4, 5 };

	// a Points to the whole array b

	ptrToArr = &b;

	for (i = 0; i < 5; i++)
    {
        printf("%d  ", *(*ptrToArr + i));
        printf("%d  ", (*ptrToArr)[i]);
        printf("%d  ", b[i]);
        printf("%d\n", *(b + i));
    }
	printf("\n");
    
    printf("int(*ptrToArr)[5]: Here 'ptrToArr' is a pointer to an array of int, of length 5\n");
    printf("So *ptrToArr will give base address of the array it points to\n");
    printf("Hence to get the value at a given address: (*ptrToArr)\n");
    printf("Hence to get the value at a given index: (*ptrToArr)[index]\n");
    printf("Hence to get the value at a given index: *(*ptrToArr + index)\n");

    printf("\n");
    int (*ptrToArr2)[5] = &(int [5]){11,2,3,5,6};

    for (i = 0; i < 5; i++)
    { 
        printf("Value of arr[%d] = %u\n", i, (*ptrToArr2)[i]);
    }

    
	return 0;
}

/* 
{11,2,3,5,6} is an initializer list, it is not an array, so you can't point at it. An array pointer needs to point at an array, that has a valid memory location.
https://stackoverflow.com/questions/17850998/initializing-a-pointer-to-an-array-of-integers
 */