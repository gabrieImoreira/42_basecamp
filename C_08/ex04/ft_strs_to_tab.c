/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:52:56 by gantonio          #+#    #+#             */
/*   Updated: 2021/04/16 21:11:45 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
char				*ft_strdup(char *src)
{
    char	*dest;
    int		src_len;
    int		i;

    src_len = 0;
    while (src[src_len])
        src_len++;
    if (!(dest = (char *)malloc(sizeof(char) * src_len + 1)))
        return (NULL);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int					ft_strlen(char *str)
{
    int		i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
    t_stock_str		*s_av;
    int				i;

    if (!(s_av = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
        return (0);
    i = 0;
    while (av[i] != 0 && i < ac)
    {
        s_av[i].size = ft_strlen(av[i]);
        s_av[i].str = av[i];
        s_av[i].copy = ft_strdup(av[i]);
        i++;
    }
    s_av[i].size = 0;
    s_av[i].str = 0;
    s_av[i].copy = 0;
    return (s_av);
}