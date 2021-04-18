#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char source[] = "Copy Source";
	char destn[] = "Destination";
	char *test;

	printf("\nBefore: source = %s e Destination = %s\n", source, destn);
	test = ft_strcpy(destn, source);
	printf("After: source = %s e Destination = %s\n\n", source, test);

}

//gcc main.c ft_strcpy.c -o test && ./test
