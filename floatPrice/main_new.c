/*
 * main_new.c
 *
 *  Created on: Mar 19, 2024
 *      Author: VICTUS
 */


#include<stdio.h>

int main(void)
{
	char c1,c2,c3,c4,c5,c6;
	printf("Enter any 6 characters of your voice \n");

	c1 = getchar();
	getchar();
	c2 = getchar();
	getchar();
	c3 = getchar();
	getchar();
	c4 = getchar();
	getchar();
	c5 = getchar();
	getchar();
	c6 = getchar();

	printf("\nASCII codes : %u,%u,%u,%u,%u,%u", c1,c2,c3,c4,c5,c6);


		printf("\Press enter key to exit the application \n");
		while(getchar() != '\n')
		{

		}
		getchar();

}
