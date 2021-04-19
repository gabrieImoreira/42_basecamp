#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int i;
	int d = 50;

	for(i = -1; i < 50; i++)
	{
		printf("Nº prime after or equal %02d => %02d | ", i, ft_find_next_prime(i));
		printf("Nº prime after or equal %02d => %02d\n", d, ft_find_next_prime(d));
		d++;
	}
	printf("\nNº prime after or equal %02d => %02d\n", 2147483647, ft_find_next_prime(2147483647)); //verify or no?
}