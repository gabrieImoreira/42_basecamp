#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char t[] = "";
	char t2[] = "A1BC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char t3[] = "1223.";
	char t4[] = ".sdsfd1sfjui";
	char t5[] = "123456";
	int test = ft_str_is_numeric(t);
	printf("teste: %d\n", test);

	test = ft_str_is_numeric(t2);
	printf("teste: %d\n", test);

	test = ft_str_is_numeric(t3);
	printf("teste: %d\n", test);

	test = ft_str_is_numeric(t4);
	printf("teste: %d\n", test);

	test = ft_str_is_numeric(t5);
	printf("teste: %d\n", test);

}
