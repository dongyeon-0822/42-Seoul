/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:58:35 by donkang           #+#    #+#             */
/*   Updated: 2022/01/10 01:55:38 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *tab, int a, int b)
{
	int	tmp;

	tmp = tab[a];
	tab[a] = tab[b];
	tab[b] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	min_idx;
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < size - 1)
	{
		min_idx = i;
		j = i;
		while (++j < size)
		{
			if (tab[j] < tab[min_idx])
				min_idx = j;
		}
		swap(tab, i, min_idx);
	}
}
