/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 01:52:01 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/14 01:34:43 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int c;

	i = 0;
	while (i < size)
	{
		c = i;
		while (c < size)
		{
			if (tab[i] >= tab[c])
				ft_swap(&tab[i], &tab[c]);
			c++;
		}
		i++;
	}
}
