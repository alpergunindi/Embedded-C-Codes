#include<stdint.h>
#inclue<stdio.h>

void delay(void)
{
	   for(uint32_t i = 0 ; i < 300000 ; i++0)
}

int main(void)
{
	uint32_t volatile *const pGDIODModeReg = (uint32_t*)(0x40020C00);
	uint32_t volatile *const pInputDataReg = (uint32_t*)(0x40020C00+0x10);
	uint32_t volatile *const pOutPutDataReg = (uint32_t*)(0x40020C00+0x14);
	uint32_t volatile *const pClockCtrlReg = (uint32_t*)(0x40023800+0x30);
	uint32_t volatile *const pPullupDownReg = (uint32_t*)(0x40020C00+0x0C);
}

	*pClockCtrlReg |= (1 << 3);

	*pGPIODModeReg &= ~(0xFF);
	*pGPIODModeReg |= 0x55;

	*pGPIODModeReg  &= ~(0xFF << 16);

	*pGPIODModeReg  &= ~(0xFF << 16);

	*pGPIODModeReg  &= (0xFF << 16);

	// Make all rows HIGH
	*pOutPutDataReg |= 0x0f;
	// make R3 LOW(PD2)
	*pOutPutDataReg &= ~( 1 << 0);
	// scan the columns
	//check C1(PD8) low or high
	if(!(pInPutDataReg & ( 1 <<8))) {
		delay();
		print("2\n");
	}

	if(!(pInPutDataReg & ( 1 <<9))) {
		delay();
		print("5\n");
	}

	if(!(pInPutDataReg & ( 1 <<10))) {
		delay();
		print("6\n");
	}

	if(!(pInPutDataReg & ( 1 <<11))) {
		delay();
		print("b\n");
	}
