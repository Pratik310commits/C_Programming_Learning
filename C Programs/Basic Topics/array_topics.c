#include <stdio.h>
#include <stdint.h>

#define BASIC_TOPICS_LEN 16
#define ADV_TOPICS_LEN 23

void DisplayString(char* string);

int main()
{
    int index;

    char *basic_topics[] = {
        "Struct",
        "String",
        "Union",
        "Multi-Dim Array",
        "typedef",
        "Pointers",
        "Call by value vs. call by address",
        "Arrays",
        "Array of strings",
        "Dynamic memory allocation",
        "Advanced preprocessor directives",
        "Macros, Advanced Macros and BuiltIn Macros",
        "Aithmetic and logical shift, and signed and unsigned shift",
        "Compiler errors vs Linker errors",
        "Bitwise vs. Arithmatic vs. Logical",
        "Signed representation"
    };

    uint16_t basicTopicsCount = (sizeof(basic_topics)/sizeof(char *));
    char *adv_topics[] = {
        "Array of Pointers",
        "Passing Arrays to functions",
        "Threading",
        "Signals, forking and interprocess communication",
        "File Handling",
        "Bit Fields",
        "Union, Struct, Bit Field combined",
        "Function Pointers",
        "Void pointers",
        "const and volatile",
        "const and pointers",
        "Passing functions and multi-dimensional arrays as arguments",
        "Functions and multi-dimensional arrays as return value",
        "Build process and creating intermediate files",
        "CMake",
        "Bitwise tricks",
        "Variadic functions",
        "setjmp, longjmp for saving and restoring state",
        "Static and dynamic linking",
        "Runtime Polymorphism",
        "Mutex, locks, semaphores",
        "Dynamically loading modules",
        "pragma weak aliasing"
    };
    uint16_t advTopicsCount = (sizeof(adv_topics)/sizeof(char *));
    printf("Basic Topics in C Programming:\n");
    for(index = 0; index < basicTopicsCount; ++index)
    {
        printf("\t%d.\t%s\n", index + 1, basic_topics[index]);
    }
/* 
    printf("\nAdvanced Topics in C Programming:\n");
    for(index = 0; index < ADV_TOPICS_LEN; ++index)
    {
        printf("\t%d.\t%s\n", index + 1, adv_topics[index]);
    }
 */
    printf("\nAdvanced Topics in C Programming:\n");
    for(index = 0; index < advTopicsCount; ++index)
    {
        printf("\t%d.\t", index + 1);
        DisplayString(adv_topics[index]);
        printf("\n");
    }

    return 0;
}

void DisplayString(char* string)
{
    while(*string != '\0')
    {
        printf("%c",*string++);
    }
}