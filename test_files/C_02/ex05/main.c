#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char t[] = "";
	char t2[] = "A1BC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char t3[] = "1223.";
	char t4[] = "sdsfjui";
	char t5[] = "ABFJCS";
	int test = ft_str_is_uppercase(t);
	printf("teste: %d\n", test);

	test = ft_str_is_uppercase(t2);
	printf("teste: %d\n", test);

	test = ft_str_is_uppercase(t3);
	printf("teste: %d\n", test);

	test = ft_str_is_uppercase(t4);
	printf("teste: %d\n", test);

	test = ft_str_is_uppercase(t5);
	printf("teste: %d\n", test);

}
