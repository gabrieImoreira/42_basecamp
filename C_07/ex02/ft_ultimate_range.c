/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:09:28 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/15 23:29:00 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *m;
	int i;

	if (min >= max)
		return (0);
	i = 0;
	m = (int *)malloc((max - min) * sizeof(int));
	if (m == NULL)
		return (0);
	while ((max - 1) >= min)
	{
		m[i] = min++;
		i++;
	}
	*range = m;
	return (i);
}
