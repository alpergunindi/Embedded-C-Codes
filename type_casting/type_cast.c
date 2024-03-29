#include<stdio.h>

int main(void)
{
	unsigned char data = 0x1FFFFFFFA0B0 + 0x1245;

	float result = (float) 80 / 3;

	printf("Data : %u result : %f\n", data, result);
}
