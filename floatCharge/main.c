#include<stdio.h>

int main(void)
{
	double charge , chargeE ;
	double electrons;
	printf("Enter the charge:");
	scanf("%lf", &charge);

	printf("Enter the charge of an electron: ");
	scanf("%le", &chargeE);

	electrons = (charge / charge) * -1;

	printf("Total number of electrons = %le \n", electrons);
	printf("Total number of electrons = %le \n", electrons);

	printf("press 'enter' key to exit the application \n");
	while(getchar() != '\n')
	{

	}
	getchar();

	return 0;
}
