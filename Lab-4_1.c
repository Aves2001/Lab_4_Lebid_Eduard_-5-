#include <stdio.h>
#include "chcp.h"
#include "check_int.h"

int x = 0, y = 0, z = 0;
double a = 0;
char errors = 0;

int main(void) {
set_chcp();

do{
errors = 0;

printf("\r\nВведіть цілі числа: x, y та z.\r\n");
	x = scanf_check_int ('x');
	y = scanf_check_int ('y');
	z = scanf_check_int ('z');

	if (pow(x,2)*y-z < 0)
	{
		printf("Під квадратним коренем відємне число. Задайте інші значення\r\n");
		errors = 1;
		continue;

	}else	if (x+y+z <= 0)
			{
				printf("Виконується логарифмування числа, меншого за нуль. Задайте інші значення\r\n");
				errors = 1;
				continue;
			}
}while(errors == 1);

a = sqrt(pow(x,2)*y-z)+log2(x+y+z);

printf("\r\nВідповідь: a = %.2lf\n", a);

	reset_chcp();
	return 0;
}
