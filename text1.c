#include "LPC11xx.h"                        /* LPC11xx definitions */

void delay(){
	long int i;
	for(i=5000000;i>0;i--){
	}	
}
int main(void){
	SystemInit();
	LPC_GPIO1->DIR |= (1<<8); 
	LPC_GPIO1->DATA|=(1<<8);

	while(1)
	{
	LPC_GPIO1->DATA&=~(1<<8);
	delay();
	LPC_GPIO1->DATA|=(1<<8);
	delay();
	}
}
