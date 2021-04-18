#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int main(void)
{
	char	*str = "Test string.";
	char	*str_copy = "abc";

	char	*str1 = "Test string.";
	char	*str_copy1 = "abc";


	printf("\n=======Original function:===========\n");
	str_copy = strdup(str);
	printf("\nString = %s | ", str_copy);
	printf("Result = %d\n\n", strcmp(str, str_copy));

	printf("\n=======Created function:===========\n");
	str_copy1 = ft_strdup(str);
	printf("\nString = %s | ", str_copy1);
	printf("Result = %d\n\n", strcmp(str1, str_copy1));
}