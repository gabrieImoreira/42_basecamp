/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:52:01 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/14 19:41:02 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putbase(int nbr, char *base, int size)
{
	unsigned int n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
	{
		ft_putbase(n / size, base, size);
		ft_putbase(n % size, base, size);
	}
	else
		ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (base[i] != '\0' && n != 1)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			n = 1;
		i++;
	}
	if (i <= 1)
		n = 1;
	if (n == 0)
		ft_putbase(nbr, base, i);
}
