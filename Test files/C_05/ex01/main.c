#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	int i;
	int c;

	for(i = -1; i < 12; i++)
	{
	c = ft_recursive_factorial(i);
    printf("Fatorial %d igual a = %d\n", i, c);
	}

	//printf("i = %d\n",n);

}
