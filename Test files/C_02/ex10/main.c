#include <bsd/string.h>
#include <stdio.h>

size_t strlcpy(char *dst, const char *src, size_t siz);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void){

	char source[] = "Copy Source"; //11
	char destn[] = "Destination0";

	char source2[] = "Copy Source";
	char destn2[] = "Destination0";

	unsigned int n1 = 8;
	int n2 = 8;

	int tam1;
	int tam2;

	printf("\n\n===Created function:===\n");
	tam1 = ft_strlcpy(destn, source, n1);
	printf("Source = %s e Destination = %s\n", source, destn);
	printf("Return size Source = %d\n", tam1);

	printf("\n===Original function:===\n");
	tam2 = strlcpy(destn2, source2, n2);
	printf("Source = %s e Destination = %s\n", source2, destn2);
	printf("Return size Source = %d\n", tam2);

	return (0);
}
