#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int i = 0;
	int *m;

	m = ft_range(1,10);
	for(i = 0; i < 9; i++)
		printf("%d ", m[i]);
}