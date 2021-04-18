#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char test[] = "|v#Ju#55t3f<{5m,y$89xm?&d&v<xm[K53hu";
	char test2[] = ",%se35<yz_::TlK!bf.h:-5";
	char test3[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";


	printf("Before:%s\n", test);
	printf("After:%s\n\n", ft_strcapitalize(test));
	printf("Before:%s\n", test2);
	printf("After:%s\n", ft_strcapitalize(test2));
	printf("Before:%s\n", test3);
	printf("After:%s\n", ft_strcapitalize(test3));
}
