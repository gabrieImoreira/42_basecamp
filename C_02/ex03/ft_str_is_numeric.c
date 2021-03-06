/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 20:40:57 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/05 21:30:27 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
			c = 0;
		i++;
	}
	return (c);
}

