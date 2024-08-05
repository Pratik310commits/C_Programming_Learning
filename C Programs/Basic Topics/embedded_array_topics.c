#include <stdio.h>
#include <stdint.h>

#define BASIC_TOPICS_LEN 14
#define ADV_TOPICS_LEN 23

void DisplayString(char* string);

int main()
{
    int index;

    char *basic_topics[] = {
        "Register access",
        "GPIO",
        "I2C",
        "SPI",
        "UART",
        "USART",
        "ADC and DAC",
        "Watch Dog Timer - Basics, and how to HOLD/STOP",
        "Edge triggered vs. level triggered",
        "Types of memories in computer system",
        "tri-state and high impedance",
        "Addressing modes in assembly",
        "~",
        "~"
    };
    uint16_t basicTopicsCount = (sizeof(basic_topics)/sizeof(char *));

    char *adv_topics[] = {
        "Interrupts",
        "Pull-up, pull-down and open drain",
        "Memory Map vs. Non-memory mapped vs. IO mapped",
        "Clock and oscillator and PLL - how to use and when",
        "Startup code",
        "IVT and ISR",
        "NVIC",
        "PWM",
        "DMA",
        "SP and PC and Status Register",
        "Static and dynamic linking",
        "Runtime Polymorphism",
        "Mutex, locks, semaphores",
        "Dynamically loading modules",
        "Different uses for WDT in MSP",
        "Real world use of Capture Mode of timer",
        "~",
        "~",
        "~",
        "~",
        "~",
        "~",
        "~"
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