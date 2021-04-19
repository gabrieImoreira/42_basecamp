#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char t[] = "";
	char t2[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char t3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t4[] = ".sdsfdsfjui";
	int test = ft_str_is_alpha(t);
	printf("teste: %d\n", test);

	test = ft_str_is_alpha(t2);
	printf("teste: %d\n", test);

	test = ft_str_is_alpha(t3);
	printf("teste: %d\n", test);

	test = ft_str_is_alpha(t4);
	printf("teste: %d\n", test);
}
