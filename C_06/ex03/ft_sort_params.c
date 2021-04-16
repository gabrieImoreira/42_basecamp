/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:22:27 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/15 23:58:28 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int c;

	c = 0;
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	if (s1[i] < s2[i])
		return (-1);
	else if (s2[i] < s1[i])
		return (1);
	else
		return (0);
}

void	sort(int argc, char **argv)
{
	int		j;
	int		k;
	char	*swap;

	j = 1;
	k = j + 1;
	while (j < argc)
	{
		while (k < argc)
		{
			if (ft_strcmp(argv[j], argv[k]) == -1)
			{
				swap = argv[j];
				argv[j] = argv[k];
				argv[k] = swap;
			}
			k++;
		}
		k = 1;
		j++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
