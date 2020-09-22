#include <stdio.h>
#include "chcp.h"
#include "check_int.h"

int n = 0, x = 0;
int i, j, s, sum = 0;
char errors = 0;

int main(void) {
set_chcp();

printf("\r\nВведіть натуральне число \"n\" та ціле число \"x\"\r\n");

do{
errors = 0;

	n = scanf_check_int('n');

		if (n < 1)
		{
			printf("\r\n%s\"n\" Має бути натуральним числом!\r\n", Error);
			errors = 1;

		}

}while(errors == 1);


	x = scanf_check_int('x');
	
		for (i = 1; i <= n; i++)
		{
			for (s = 0, j = 2; j <= n; j++) 
			s += x+i+j;

		sum += s;
		}

	printf("\r\nВідповідь: %d\r\n", sum);

	reset_chcp();
	return 0;
}
