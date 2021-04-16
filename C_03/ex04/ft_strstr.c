/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:58:06 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/10 01:01:58 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		c;

	c = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[c] != '\0')
	{
		i = 0;
		while (str[c + i] == to_find[i] && str[c + i] != '\0')
		{
			if (to_find[i + 1] == '\0')
				return (&str[c]);
			i++;
		}
		c++;
	}
	return (0);
}
