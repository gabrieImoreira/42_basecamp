#include <unistd.h>
#include "ft_stock_str.h"
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	long	nb;
	int		i;
	char	c[10];

	nb = nbr;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
