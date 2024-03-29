#include<stdint.h>
#include<stdio.h>

struct DataSet
{
	char data1;
	int data2;
	char data3;
	short data4;
};

int main(void)
{
	struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	uint8_t *ptr;

	prt = (uint8_t*)&data;

	uint32_t totalSize = sizeof(struct DataSet);

	for(uint32_t i = 0 ; i < totalSize ; i++)
	{
		printf("%p   %x\n",ptr,*ptr);
		ptr++;
	}

	printf("Memory address   Content \n");
	printf("==========================\n");
x}
