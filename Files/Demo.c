#include "IO_Macros.h"

//				PORT, PIN
#define BUTTON	A, 0
#define LED		D, 1

int main(void)
{
	//Button input
	PinMode(BUTTON, Input);
	//Led output
	PinMode(LED, Output);
	//Button pull-up resistor
	DigitalWrite(BUTTON, High);
	//Led switched off
	DigitalWrite(LED, Low);
	
	//Loop
	while (1 == 1)
    {
		//If button is high,
		if (DigitalRead(BUTTON))
			//turn off the LED
			DigitalWrite(LED, Low);
		//else
		else
			//turn on the LED
			DigitalWrite(LED, High);
    }
	
	return 0;
}
