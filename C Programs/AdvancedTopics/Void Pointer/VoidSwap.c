#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void swap(void* a, void* b, size_t size);

int main()
{

    char ch1='x', ch2='y';
    int n1 = 10, n2=20;
    float n3=1.5F, n4=3.4F;
    bool flag1 = true, flag2 = false;
    uint16_t unint1 = 1024, unint2 = 2048;

    printf("ch1: %c, ch2: %c\n", ch1, ch2);
    swap(&ch1,&ch2,sizeof(char));
    printf("ch1: %c, ch2: %c\n", ch1, ch2);
    
    printf("n1: %d, n2: %d\n", n1, n2);
    swap(&n1,&n2,sizeof(int));
    printf("n1: %d, n2: %d\n", n1, n2);

    printf("n3: %f, n4: %f\n", n3, n4);
    swap(&n3,&n4,sizeof(float));
    printf("n3: %f, n4: %f\n", n3, n4);

    printf("flag1: %d, flag2: %d\n", flag1, flag2);
    swap(&flag1,&flag2,sizeof(bool));
    printf("flag1: %d, flag2: %d\n", flag1, flag2);

    printf("unint1: %u, unint2: %u\n", unint1, unint2);
    swap(&unint1,&unint2,sizeof(uint16_t));
    printf("unint1: %u, unint2: %u\n", unint1, unint2);

    return 0;
}

void swap(void* a, void* b, size_t size)
{
    if(size != 0)
    {
        void* t = malloc(size);
        if(t){
            memcpy(t,a,size);
            memcpy(a,b,size);
            memcpy(b,t,size);
            free(t);
            t = NULL;
        }
    }
}