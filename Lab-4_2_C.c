#include <stdio.h>
#include "chcp.h"

//		Діапазон:
//	   Від     До
int x = 1, y = 100;
float sum = 0, s = 0;

int main(void) {
set_chcp();

do{
x++;
		if (x%2 != 0) continue;
			sum += x;
			s++;

}while(x <= y);

printf("\r\nСереднє арифметичне всіх парних чисел у діапазоні [%d;%d] = %.2lf\n",x-y, y, sum/s);

	reset_chcp();
	return 0;
}
