/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:17:26 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/15 15:05:12 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *m;

	m = (int *)malloc((max - min) * sizeof(int));
	if (m == NULL)
		return (NULL);
	if (min >= max)
	{
		m = NULL;
		return (m);
	}
	while (max >= min)
	{
		m[max - min - 1] = max - 1;
		max--;
	}
	return (m);
}
