#include<stdint.h>
#include<stdio.h>

void array_display(uint32_t *pArray, uint32_t nItems

int main(void)
{
	uint8_t someData[10] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}

	for(uint32_t i = 0 ; i < 10 ; i++)
	{
		someData[i] = 0x33;
	}

	uint32_t nItems = sizeof(someData) / sizeof(uint8_t);
	array_display((someData + 2), (nItems - 2));
	return 0;
}

void array_display(uint32_t *pArray, uint32_t nItems)
{
	for(uint32_t i = 0 ; i < nItems ; i++)
	{
		printf("%x\t",*(pArray + i));
	}
}
