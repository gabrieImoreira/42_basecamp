/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 00:00:47 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/05 19:05:05 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int c;
	int	temp;

	i = 0;
	c = size - 1;
	while (i < c)
	{
		temp = tab[i];
		tab[i] = tab[c];
		tab[c] = temp;
		i++;
		c--;
	}
}

