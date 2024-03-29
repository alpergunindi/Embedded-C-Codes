#include<stdio.h>
#include<stdint.h>

int main(void)
{

	float num1, num2;
	printf("Enter the first number(integer):");
	scanf("%f",&num1);
	printf("Enter the second number(integer):");
	scanf("%f",&num2);

	int32_t n1, n2;

	n1 = num1;
	n2 = num2;

	if( (n1 != num1) || (n2 != num2)){
		printf("Warning ! Comparing only integer part\n");
	}

	if(n1 == n2){
		printf("Hello");
	}else{
		if(n1 < n2){
			printf("no", n2);
		}else{
			printf("yes", n1);
		}
	}

	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{

	}
	getchar();


}
