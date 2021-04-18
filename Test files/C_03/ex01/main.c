#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char test[] = "ABC";
	char test2[] = "AVC";
	int a;
	int b;
	unsigned n = 2;

	a = ft_strncmp(test, test2, n);
	b = strncmp(test, test2, n);

	printf("Created:%d\n", a);
	printf("Original:%d\n", b);
}
