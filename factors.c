#include <stdio.h>

/*
 * Function: find_divisor
 * ------------------------
 * Determines the smallest divisor of a given number (excluding 1).
 * 
 * Parameters:
 *   - num: The number for which to find the smallest divisor.
 *           Must be a non-negative integer.
 *
 * Returns:
 *   - The smallest divisor of num, if found.
 *   - 0 if num is prime (has no divisors other than 1 and itself).
 */

int find_divisor(long int num)
{
	long int factor;

	if (num % 2 == 0)
	{
		printf("%lu=%lu*%i\n", num, num / 2, 2);
		return 0;
	}

	factor = 3;
	while (factor * factor <= num)
	{
		if (num % factor == 0)
		{
			printf("%lu=%lu*%lu\n", num, num / factor, factor);
			return 0;
		}
		else
			factor += 2;
	}

	printf("%lu=%lu*%i\n", num, num, 1);

	return 0;
}
