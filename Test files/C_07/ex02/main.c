#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int i = 0;
	int *m;
	int r;
	
	r = ft_ultimate_range(&m, 1,10);
	for(i = 0; i < 9; i++)
		printf("%d ", m[i]);
	r = ft_ultimate_range(&m, 0, 8);
	printf("\nR = %d \n", r);
	r = ft_ultimate_range(&m, 8, 8);
	printf("R = %d \n", r);
}