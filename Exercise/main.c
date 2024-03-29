/*
 * main.c
 *
 *  Created on: Mar 19, 2024
 *      Author: VICTUS
 */


#include<stdio.h>

int main()
{
	char myChar = 100;
	print("Adress: %p\n", &myChar);
	char *ptr = &myChar;
	char data = *ptr;
	printf("Data obtained from pointer: %d \n", data);
	*ptr = 65;
	printf("Value of myChar after write operation: %d\n", myChar);
	return 0;
}
