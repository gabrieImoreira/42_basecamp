#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	int length;
	char *t = "BRABOS";
	length = ft_strlen(t);
	printf("%d", length);
}
