/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:06:02 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/08 23:23:22 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
