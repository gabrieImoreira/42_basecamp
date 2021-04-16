/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:39:12 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/13 01:30:29 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int n;

	i = 0;
	n = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i != power - 1)
	{
		n *= nb;
		i++;
	}
	return (n);
}
