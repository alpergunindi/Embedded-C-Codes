#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Add : %X\n", math_add(0x0FFF1111 , 0x0FFF1111));

	printf("Mul : %I64x\n", math_mul(0x0FFF1111 , 0x0FFF1111));

	printf("Add : %0.2f\n", math_div(100 , 8));

	printf("Add : %d\n", math_sub(100 , 8));
	return 0;
}
