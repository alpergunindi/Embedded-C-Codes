#include<stdio.h>
#include<stdint.h>

int main(void)
{
	int age = 0;

	printf("Enter your age here :");
	scanf("%d",&age);

	if(age < 18)
	{
		printf("Sorry ! You are not eligible to vote\n");
	}

	if(age >= 18){
		printf("Congrats you are eligible.");
	}

	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{

	}
	getchar();
}
