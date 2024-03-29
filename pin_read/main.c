#include<stdint.h>

int main(void)
{
	uint32_t volatile *pClkCtrlReg = (uint32_t*)0x40023830;
	uint32_t volatile *pPortDModeReg = (uint32_t*)0x40020C00;
	uint32_t volatile *pPortDOutReg = (uint32_t*)0x40020C14;

	uint32_t volatile *pPortAModeReg = (uint32_t*)0x4002 0000;
	uint32_t volatile *pPortAInReg = (uint32_t*)0x4002 0010;

	//1. enable the clock for GPIO , GPIOA peripheral in the AHB1ENR
	*pClkCtrlReg |= ( 1 << 3);
	*pClkCtrlReg |= ( 1 << 0);

	//2. Configure the mode of the IO pin as output
	//a. clear the 24th and 25th bit positions (CLEAR)
	*pPortDModeReg &= ~( 3 << 24);
	//b. make 25th bit position as 1(SET)
	*pPortDModeReg |= ( 1 << 24);

	// Configure PA0 as input mode (GPIOA MODE REGISTER)
	*pPortAModeReg &= ~(3 << 0);

	while(1)
	{
	// read the pin status of the pin PA0 (GPIOA INPUT DATA REGISTER)
	uint8_t pinStatus = (uimt8_t)(*pPortAInReg & 0x1);

	if(pinSratus){
		*pPortDOutReg |= ( 1 << 12);
	}else{
		*pPortDOutReg &= ~( 1 << 12);
	}

	//3. SET 12th of the output data register to make I/O pim-12 as HIGH
	*pPortDOutReg |= ( 1 << 12);

	}
}
