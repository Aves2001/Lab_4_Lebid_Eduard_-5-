#include <stdio.h>
#include <math.h>
#include "chcp.h"

float x = 3, y = 0;

int main(void) {
set_chcp();

printf("\r\n----------------------\r\n");
printf("|   X    |     Y     |\r\n");
printf("----------------------\r\n");

//    від	до
while (x <= 6)
{
	if (2*x < 0)
	{
		printf("[Error] Корінь з від’ємного числа\n");
	}

	y = exp(sqrt(2*x))*pow(x,2);

	if (y < 999)
	{
		printf("|  %.2f  |  %.2f   |\n", x, y);
	} else printf("|  %.2f  |  %.2f  |\n", x, y);
	
	x += 0.05; //dx
}
printf("----------------------\r\n");
	reset_chcp();
	return 0;
}
