#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char source[] = "tes funcionando por 3x, 4x, 5x";
	char destn[] = "Os parâmetros de tes";

	char source1[] = "tes funcionando por 3x, 4x, 5x";
	char destn1[] = "Os parâmetros de tes";


	printf("\n==Original function:==\n");
	printf("\nBefore: Source = %s ; Destination = %s ;", source, destn);
	printf(" ==> Destination = %s\n\n", strcat(destn, source));

	printf("==Created:==\n");
	printf("\nBefore: Source = %s ; Destination = %s ;", source1, destn1);
	printf(" ==> Destination = %s\n\n", ft_strcat(destn1, source1));
}

//gcc main.c ft_strncpy.c -o test && ./test
