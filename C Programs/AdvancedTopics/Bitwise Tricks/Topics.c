#include <stdio.h>
#include<stdint.h>

#define TOPICS_LEN 5

void DisplayString(char* string);

int main()
{
    int index;

    char *topics[] = {
        "Reverse the bit stream",
        "Set and Clear",
        "Divisibility",
        "Power of 2",
        "Get Bit"
    };

    uint16_t topicsCount = (sizeof(topics)/sizeof(char *));

    printf("Basic Topics in C Programming:\n");
    for(index = 0; index < topicsCount; ++index)
    {
        printf("\t%d.\t%s\n", index + 1, topics[index]);
    }
/* 
    printf("\nAdvanced Topics in C Programming:\n");
    for(index = 0; index < ADV_TOPICS_LEN; ++index)
    {
        printf("\t%d.\t%s\n", index + 1, adv_topics[index]);
    }
 */
/*     
    printf("\nAdvanced Topics in C Programming:\n");
    for(index = 0; index < TOPICS_LEN; ++index)
    {
        printf("\t%d.\t", index + 1);
        DisplayString(topics[index]);
        printf("\n");
    }
 */
    return 0;
}

void DisplayString(char* string)
{
    while(*string != '\0')
    {
        printf("%c",*string++);
    }
}