#include <stdio.h>
/**

 * is_prime_number - returns 1 if the input integer is a prime number

 * @n: number to check

 * Return: 1 if prime, 0 if not

 */

int is_prime_number(int n)

{

	if (n <= 1)

		return (0);

	return (prime_check(n, 2));

}

/**

 * prime_check - checks if a number is prime

 * @n: number to check

 * @i: number to divide by

 * Return: 1 if prime, 0 if not

 */

int prime_check(int n, int i)

{

	if (n % i == 0)

		return (0);

	if (i * i > n)

		return (1);

	return (prime_check(n, i + 1));

}
