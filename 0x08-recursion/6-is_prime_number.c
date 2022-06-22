/**
 * _prime_check - prime check helper function
 * @n: the number
 * @i: divisor to be checked
 *
 * Return: 1 if n is prime or 0
 */
int _prime_check(int n, int i)
{
	if (i < n)
		return (n % i == 0 ? 0 : _prime_check(n, ++i));
	return (1);
}

/**
 * is_prime_number - checkes if n is prime number
 * @n: the number
 *
 * Return: 1 if n is prime or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_check(n, 2));
}
