#include <stdio.h>
#include "chcp.h"
#include "check_int.h"

int n = 0, x = 0;
int sum_i = 0, sum_j = 0;
char errors = 0;

int main(void) {
set_chcp();

printf("\r\nВведіть натуральне число \"n\" та ціле число \"x\"\r\n");

do{
errors = 0;

	n = scanf_check_int('n');

		if (n < 1)
		{
			printf("\r\n\"n\" має бути натуральним числом!\r\n");
			errors = 1;
		}

}while(errors == 1);


	x = scanf_check_int('x');
	
		for (int i = 1; i <= n; i++)
		{
			sum_i += i;
		}

			for (int j = 2; j <= n; j++)
			{
				sum_j += j;
			}

	printf("\r\nВідповідь: %d\r\n", x + sum_i + sum_j);

	reset_chcp();
	return 0;
}
