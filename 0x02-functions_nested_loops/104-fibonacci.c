#include <stdio.h>

/**
 *
 *  * main - finds and prints the first 98 Fibonacci numbers,
 *
 *   * starting with 1 and 2
 *   followed by a new line
 *   Return: always 0 (Success)
 */

int main(void)

{
	int c
	unsigned long int fib1 = 0, fib2 = 1, s;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (c= 0; c < 92; c++)
	{
		s = fib1 + fib2;
		printf("%lu, ", s);
		fib1 = fib2;
		fib2 = s;
	}
	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 *= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (c != 98)
			printf(", ");
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
