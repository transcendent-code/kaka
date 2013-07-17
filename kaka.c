#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	char *p = calloc(8, sizeof(uint8_t));

	printf("p: %p\n", p);

	return 0; 
}
