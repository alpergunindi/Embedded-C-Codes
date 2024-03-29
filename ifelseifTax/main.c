#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void)
{
	uint64_t income;
	uint64_t tax;

	double temp_income

	printf("Enter you total income");
	scanf("%lf",&temp_income);

	income = (uint64_t) temp_income;

	if(income <= 9525){
		tax= 0;
	}else if(income > 9525) && (income <= 38700){
		tax = income * 0.12;
	}else if((income > 38700) && (income <= 38700)){
		tax = income * 0.22;
	}

	wait_for_user_input();
}
