#include <stdio.h>

enum PetType
{
    Animal,
    Fish,
    Bird
};

enum Pet
{
    Cat,
    Dog,
    Turtle,
    Snake
} MyPet;

enum
{
    First = 1,
    Second,
    Third,
    Fourth,
    Fifth
} Rank;

int main()
{
    enum PetType myPetType = Animal;
    MyPet = Cat;
    Rank = Second;
    printf("My pet Type: %u, my pet: %u\n\n", myPetType, MyPet);
    printf("My rank: %u\n\n", Rank);
    return 0;
}