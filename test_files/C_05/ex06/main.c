#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	int i;
	int d = 50;
	int e = 101;
	for(i = 0; i < 50; i++)
	{
		printf("%02d  is prime? = %d | ", i, ft_is_prime(i));
		printf("%d is prime? = %d | ", d, ft_is_prime(d));
		printf("%d is prime? = %d\n", e, ft_is_prime(e));
		d++;
		e++;
	}
	//printf("\n\n%d is prime? = %d\n", 2147483647, ft_is_prime(2147483647)); verify or no?
}