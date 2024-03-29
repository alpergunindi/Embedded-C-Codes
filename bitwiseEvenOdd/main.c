#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void)
{
	uint_32 num1;
	printf("There is the number: ");
	scanf("%d", &num1);

	if(num1 & 1){
		printf("%d number is an odd number", &num1);
	}else{
		printf("%d number is even number", &num1);
	}

	wait_for_user_input();
}

void wait_for_user_input(void)
{

}
