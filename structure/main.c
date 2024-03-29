#include<stdint.c>

struct carModel
{
	uint8_t carSpeed;
};

int main(void)
{
	struct carModel carBMW = {2021,15000,220,1330};
	printf("Sizeof of struct carModel is %I64u\n",sizeof(struct carModel));

	getchar();

	return 0;
}
