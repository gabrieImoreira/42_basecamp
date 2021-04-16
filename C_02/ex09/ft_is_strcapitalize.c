/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:58:16 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/08 14:12:49 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if (str[i + 1] >= 97 && str[i + 1] <= 122)
		{
			if ((str[i] < 48) || (str[i] > 57 && str[i] < 65)
				|| (str[i] > 90 && str[i] < 97) || (str[i] > 122))
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

