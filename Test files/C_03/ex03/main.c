#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char source[] = "Source";
	char destn[] = "Destination";

	char source1[] = "Source";
	char destn1[] = "Destination";

	unsigned int n = 15;

	printf("\nValue unsigned: %u\n", n);
	printf("\n==Original function:==\n");
	printf("\nBefore: Source = %s ; Destination = %s ;", source, destn);
	printf(" ==> Destination = %s-\n\n", strncat(destn, source, n));

	printf("==Created:==\n");
	printf("\nBefore: Source = %s ; Destination = %s ;", source1, destn1);
	printf(" ==> Destination = %s-\n\n", ft_strncat(destn1, source1, n));
}

