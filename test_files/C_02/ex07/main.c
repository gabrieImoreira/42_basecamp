#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char test[] = "abcdedfghijklmnopqrstuvxwyz";
	char test2[] = "abcdedfghijklmnopqrstuvxwyzABCPQWYZ";

	printf("Before: %s\n", test);
	printf("After: %s\n\n", ft_strupcase(test));
	printf("Before: %s\n", test2);
	printf("After: %s\n", ft_strupcase(test2));
}
