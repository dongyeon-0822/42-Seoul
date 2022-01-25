/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:42:09 by donkang           #+#    #+#             */
/*   Updated: 2022/01/24 20:21:22 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*pc;
	int		len;

	len = ft_strlen(str);
	pc = (char *)malloc(sizeof(char) * (len + 1));
	if (pc != NULL)
		ft_strcpy(pc, str);
	return (pc);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tmp;

	i = 0;
	tmp = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tmp == NULL)
		return (NULL);
	while (i < ac)
	{
		tmp[i].size = ft_strlen(av[i]);
		tmp[i].str = av[i];
		tmp[i].copy = ft_strdup(av[i]);
		i++;
	}
	tmp[i].str = 0;
	return (tmp);
}
