#include<stdio.h>
#include<stdint.h>


void wait_for_user_input(void);

int main(void)
{
	uint8_t num = 1;

	while(num <= 10){
		printf("%d\n", num++);
	}

	wait_for_user_input();
}

void wait_for_user_input(void)
{

	printf("")
}
