
#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	int i = 2147395600; // 2147488281 sqrt(46431)
	printf("Highest number sqrt not accepted: %d\n", ft_sqrt(2147483647)); // greater than int
	printf("Highest number sqrt accepted: %d\n", ft_sqrt(2147395600)); // highest accept => 2147488281 sqrt(46431)
	//printf("Highest number sqrt not accepted: %d\n", ft_sqrt(2147488281)); // greater than int
	for(i = -1; i <= 100; i++)
		printf("%d ", ft_sqrt(i)); //print sqrt and 0's.
}