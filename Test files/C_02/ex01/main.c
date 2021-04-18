#include <stdio.h>
#include <bsd/string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char source[] = "Copy Source";
	char destn[] = "Destination";
	int n = 5;
	char *test;

	printf("==Original function:==\n");
	printf("\nBefore: source = %s e Destination = %s\n", source, destn);
	strncpy(destn, source, n);
	printf("Before: source = %s e Destination = %s\n\n", source, destn);
	printf("==Created:==\n");
	printf("\nBefore: source = %s e Destination = %s\n", source, destn);
	ft_strncpy(destn, source, n);
	printf("After: source = %s e Destination = %s\n", source, destn);
}

//gcc main.c ft_strncpy.c -o test && ./test
