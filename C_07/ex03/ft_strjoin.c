/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:06:12 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/15 22:39:10 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int d;
	int i;
	int s;

	i = 0;
	d = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	while (dest[d] != '\0')
		d++;
	while (i <= s)
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*m;
	int		i;

	i = 0;
	m = malloc(size * sizeof(char));
	if (m == NULL)
		return (NULL);
	if (size == 0)
	{
		m = malloc(sizeof(char));
		m = 0;
		return (m);
	}
	while (i < size)
	{
		ft_strcat(m, strs[i]);
		if (i < size - 1)
			ft_strcat(m, sep);
		i++;
	}
	return (m);
}
