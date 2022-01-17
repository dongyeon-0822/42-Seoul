/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:24:10 by donkang           #+#    #+#             */
/*   Updated: 2022/01/17 13:29:33 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(char **tab, int size)
{
	char	*tmp;
	int		min_idx;
	int		i;
	int		j;

	i = 0;
	while (++i < size - 1)
	{
		min_idx = i;
		j = i;
		while (++j < size)
		{
			if (ft_strcmp(tab[j], tab[min_idx]) < 0)
				min_idx = j;
		}
		tmp = tab[i];
		tab[i] = tab[min_idx];
		tab[min_idx] = tmp;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		ft_sort_int_tab(av, ac);
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
				write(1, &av[i][j++], 1);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
