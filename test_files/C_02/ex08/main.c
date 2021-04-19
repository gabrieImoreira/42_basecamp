#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char test[] = "ABCDEDFGHIJKLMNOPQRSTUVXWYZ";
	char test2[] = "AabcdedfghijklmnopqrstuvxwyzABCPQWYZ";
	char test3[] = "A.wyz-ABCPQWYZ/";


	printf("Before: %s\n", test);
	printf("After: %s\n\n", ft_strlowcase(test));
	printf("Before: %s\n", test2);
	printf("After: %s\n", ft_strlowcase(test2));
	printf("Before: %s\n", test3);
	printf("After: %s\n", ft_strlowcase(test3));
}
