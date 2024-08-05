#include <stdio.h>
#include <stdint.h>

typedef struct _Animal
{
    uint16_t length;
    uint16_t weight;
} Animal, *PAnimal;

typedef struct 
{
    uint16_t length;
    uint16_t weight;
    uint16_t range;
} Car, *PCar;


int main()
{
    Animal myPet = {.length = 20, .weight = 30};
    PAnimal p_myPet = &myPet;

    printf("My pet's - Length: %u, Weight: %u\n\n", p_myPet->length, p_myPet->weight);

    return 0;
}