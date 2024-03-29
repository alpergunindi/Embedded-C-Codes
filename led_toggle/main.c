#include<stdint.h>

void main(void)
{
	uint32_t *pClkCtrlReg = (uint32_t*)0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*)0x40020C00;
	uint32_t *pPortDOutReg = (uint32_t*)0x40020C14;

	//1. enable the clock for GPIO peripheral in the AHB1ENR
	*pClkCtrlReg |= ( 1 << 3);

	//2. Configure the mode of the IO pin as output
	//a. clear the 24th and 25th bit positions (CLEAR)
	*pPortDModeReg &= ~( 3 << 24);
	//b. make 25th bit position as 1(SET)
	*pPortDModeReg |= ( 1 << 24);

	//3. SET 12th of the output data register to make I/O pim-12 as HIGH
	*pPortDOutReg |= ( 1 << 12);

	while(1)
	//introduce small human observable delay
	for(uint32_t  i=0; i < 10000 ; i++);
	//Turn OFF the LED
	*pPortDOutReg &= ~( 1 << 12);

	for(uint32_t i=0 ; i < 10000 ; i++);
	}

}
