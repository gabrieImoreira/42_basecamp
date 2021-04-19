#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	const char *largestring = "Hoo Bar Bar Baz";
    const char *smallstring = "Bar";

	char *string = "Hoo Bar Bar Baz";
    char *find = "Bar";

	char *ptr;
	char *ptr2;

	printf("\n==Original function:==\n");
	ptr = strstr(largestring, smallstring);
	printf("\nPointer: Source = %s\n", ptr);

	printf("\n==Created function:==\n");
	ptr2 = ft_strstr(string, find);
	printf("\nPointer: Source = %s\n", ptr2);
}

