#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char source[] = "April 2021";
	char destn[] = "Ecole 42 basecamp";

	char source1[] = "April 2021"; //10
	char destn1[] = "Ecole 42 basecamp"; //17
	unsigned int n = 20;
	int i;
	unsigned int i1;

	printf("\nValue unsigned: %u\n", n);
	printf("\n==Original function:==\n");
	printf("\nBefore: Source = %s ; Destination = %s ;", source, destn);
	i = strlcat(destn, source, n);
	printf(" ==> Destination = %s ; Source Length: %d\n\n", destn, i);

	printf("==Created:==\n");
	printf("\nBefore: Source = %s ; Destination = %s  //" , source1, destn1);


	i1 = ft_strlcat(destn1, source1, n);
	printf(" ==> Destination = %s ; Source Length: %d\n\n", destn1, i1);
}