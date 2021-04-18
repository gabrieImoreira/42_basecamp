#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char t[] = "";
	char t2[] = " A1BC abcáéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char t3[] = "1223.";
	char t4[] = "sdsfj[]!?@#$&ui";
	char t5[] = "ááá";
	int test = ft_str_is_printable(t);
	printf("teste: %d\n", test);

	test = ft_str_is_printable(t2);
	printf("teste: %d\n", test);

	test = ft_str_is_printable(t3);
	printf("teste: %d\n", test);

	test = ft_str_is_printable(t4);
	printf("teste: %d\n", test);

	test = ft_str_is_printable(t5);
	printf("teste: %d\n", test);

}
