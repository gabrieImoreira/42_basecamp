/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:48:54 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/10 00:36:34 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	j;
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = ft_strlen(src);
	d = ft_strlen(dest);
	j = s + d;
	if (size > d)
	{
		while (d + 1 < size && src[i] != '\0')
		{
			dest[d] = src[i];
			i++;
			d++;
		}
		dest[d] = '\0';
		return (j);
	}
	if (size == d)
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + size);
}
