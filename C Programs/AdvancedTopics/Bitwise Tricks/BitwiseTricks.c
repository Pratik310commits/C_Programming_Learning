#include <stdio.h>
#include <stdint.h>

int main() 
{
	uint16_t num = 16;
	
    printf("num = %u\n", num);
    printf("-num = %u\n", -num);
    
	num = ~-num;
	printf("num = %u\n", num);

    num = -~num;
	printf("num = %u\n", num);
	
	return 0;
}