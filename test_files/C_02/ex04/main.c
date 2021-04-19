#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char t[] = "";
	char t2[] = "\";
	char t3[] = "1223.";
	char t4[] = "sdsfjui";
	char t5[] = "ABFJCS";
	int test = ft_str_is_lowercase(t);
	printf("teste: %d\n", test);

	test = ft_str_is_lowercase(t2);
	printf("teste: %d\n", test);

	test = ft_str_is_lowercase(t3);
	printf("teste: %d\n", test);

	test = ft_str_is_lowercase(t4);
	printf("teste: %d\n", test);

	test = ft_str_is_lowercase(t5);
	printf("teste: %d\n", test);

}
