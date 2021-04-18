#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(void)
{
	int i;
	int n;
    char *s;

    s = " \n \t\f\r \v -1234b67asd";
    i = atoi(s);     /* i = -9885 */
	n = ft_atoi(s);

    printf("i = %d\n", i);
	printf("i = %d\n",n);

}

