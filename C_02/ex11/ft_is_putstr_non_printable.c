/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:29:00 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/08 13:50:35 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c > 15)
		ft_putchar(hex[c / 16]);
	else
	{
		ft_putchar('0');
	}
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 30)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_hex(str[i]);
		}
		i++;
	}
}

