#include <math.h>

// char debug = 1;

// x = scanf_check_int ('x');

int scanf_check_int (char printf_x)
{

#define N 11
#define limit_s N-2

char error = 0;
char s[N] = "0";
char scan_sum = 0;
char minus = 0;
int result = 0;

do{
error = 0;
scan_sum = 0;
minus = 0;

printf("\r\n%c = ", printf_x);

fgets(s, N, stdin);
fflush(stdin);

if (s[0] == '\n')
{
	printf("\r\nВведіть хоть щось будьласка\r\n");
	error = 1;
	continue;
} else	if (s[0] == '-' && s[1] == '\n')
		{
			printf("\r\nПросто мінус? Серйозно!?\r\n");
			error = 1;
			continue;
		}

for (int i = 0; i < N; i++)
{
	if (s[i] == '-')
	{
		minus++;

	}

	if (s[i] == '\n')
	{
		break;

	} else scan_sum++;
}

// printf("-------|Кількість мінусів = %d |---------\n", minus); //debug

	if (scan_sum > limit_s || scan_sum < -limit_s)
	{
		printf("\r\n\nУпс! Програма не розрахована на обчислення таких великих чисел\r\n");
		error = 1;
		continue;
	}

	for (int i = 0; i < scan_sum; i++)
	{

		if (s[i] == ' ')
		{
			printf("\r\nПробіл був лишнім введіть нормально будьласка!\r\n");
			error = 1;
			break;
						//45 = -		//від 0 до 9		// не більше 1-го мінуса
		} else  if ((s[i] == 45 || s[i] >= 48 && s[i] <= 57) && (minus <= 1))
				{
				// printf("\r\ns[%d] = %d ---| Добре |---", i, s[i]); //debug
				
				} else {
						// printf("\r\ns[%d] = %d ---| не Добре |---", i, s[i]); //debug
						printf("\r\nУвага! Ви ввели неправильне значення \"%c\"\r\n", printf_x);
						error = 1;
						break;

						}
	}

}while (error == 1);


// printf("\r\n\n"); //debug
// for (int i = 0; i < N; i++) //debug
// { //debug
	// printf("---------| s[%d] = %d [%c]|-------\r\n", i, s[i], s[i]); //debug
// } //debug
// printf("\r\n\n"); //debug

// printf("---------|Кількість введених символів| %d |-------\r\n", scan_sum); //debug

result = atoi(s);
// printf("----|scanf_check_int| result = %d |-----\n", result); //debug

return result;
}
