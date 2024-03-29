#include<stdio.h>
#include<stdint.h>

int main(void)
{
	uint32_t const data = 10;
	printf("Value %u", data);

	uint32_t *ptr = (uint32_t*)&data;

	*ptr = 50;

	printf("New value: %u",data);

	getchar();

}
