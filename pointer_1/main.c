#include<stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(void)
{
	char *pAdress1;
	pAdress1 = (char*)&g_data;
	printf("Value at address %p is : %d \n", pAddress1, *pAddress1);

	int *pAddress2;
	pAddress2 = (int*)&g_data;
	printf("Value at address %p is : %x\n", pAddress2, *pAddress2);

	short *pAddress3;
	pAddress3 = (int*)&g_data;
	printf("Value at address %p is : %x\n", pAddress3, *pAddress3);

	long long *pAddress4;
	pAddress4 = (int*)&g_data;
	printf("Value at address %p is : %x\n", pAddress4, *pAddress4);

	return 0;
}