#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
	int i;
	for(i = -1; i <= 21; i++)
		printf("%d ",ft_fibonacci(i));
	printf("\n");
}