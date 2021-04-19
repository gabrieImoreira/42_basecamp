#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main(void){

	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};
	
	printf("\n\n===Created function:===\n");
	ft_putstr_non_printable(str);
	
	return (0);
}

