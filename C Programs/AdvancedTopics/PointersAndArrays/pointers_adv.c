// C program to demonstrate
// pointer to an array.

#include <stdio.h>

const int SIZE = 3;

int main()
{

	// Pointer to an array of five numbers
	int(*a)[5];
    int arr[] = { 1, 2, 3 };
 
    // we can make an integer pointer array to
    // storing the address of array elements
    int i, *ptr[SIZE];

	int b[5] = { 1, 2, 3, 4, 5 };


	// Points to the whole array b

	a = &b;

	for (i = 0; i < 5; i++)
    {
        printf("%d  ", *(*a + i));
        printf("%d  ", (*a)[i]);
        printf("%d  ", b[i]);
        printf("%d\n", *(b + i));
    }
	printf("\n");
    
    for (i = 0; i < SIZE; i++)
    { 
        // assigning the address of integer.
        ptr[i] = &arr[i];
    }
    printf("\n");
    
    // printing values using pointer
    for (i = 0; i < SIZE; i++)
    { 
        printf("Value of arr[%d] = %d, Address of arr[%d] = %u\n", i, *ptr[i], i, ptr[i]);
    }
    printf("\n");

    int (*ptrToArr)[5] = &(int [5]){11,2,3,5,6};

    for (i = 0; i < 5; i++)
    { 
        printf("Value of arr[%d] = %u\n", i, (*ptrToArr)[i]);
    }
	return 0;
}

/* 
{11,2,3,5,6} is an initializer list, it is not an array, so you can't point at it. An array pointer needs to point at an array, that has a valid memory location.
https://stackoverflow.com/questions/17850998/initializing-a-pointer-to-an-array-of-integers
 */