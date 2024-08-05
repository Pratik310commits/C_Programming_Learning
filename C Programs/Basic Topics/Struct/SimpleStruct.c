#include <stdio.h>
#include <stdint.h>

/* 
// Simple definition of a struct
 */
struct SimpleStruct
{
    uint16_t simpleMember;
};

/* 
// Definition of struct and declaration of 2 struct variables of this type
 */
struct NextStruct
{
    uint16_t simpleMember;
} NS1, NS2;

/* 
// Definition a nameless struct and declaring a variable of its type
 */
struct
{
    uint16_t justAMember;
} ThirdStruct;

int main()
{
    struct SimpleStruct S1;
    S1.simpleMember = 27;
    NS1.simpleMember = 44;
    struct NextStruct NS3 = {74};
    struct SimpleStruct S2 = {.simpleMember = 88};

    ThirdStruct.justAMember = 56;

    printf("S1.simpleMember = %d\n", S1.simpleMember);
    printf("S2.simpleMember = %d\n", S2.simpleMember);
    printf("NS1.simpleMember = %d\n", NS1.simpleMember);
    printf("NS3.simpleMember = %d\n", NS3.simpleMember);
    printf("ThirdStruct.justAMember = %d\n", ThirdStruct.justAMember);

    return 0;
}