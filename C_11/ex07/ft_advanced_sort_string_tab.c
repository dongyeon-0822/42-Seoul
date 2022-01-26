/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:28:45 by donkang           #+#    #+#             */
/*   Updated: 2022/01/26 21:14:44 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **str)
{
	int	cnt;

	cnt = 0;
	while (*str++)
		cnt++;
	return (cnt);
}

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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*tmp;
	int		min_idx;
	int		i;
	int		j;
	int		size;

	size = ft_strlen(tab);
	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i;
		while (++j < size)
		{
			if (cmp(tab[j], tab[min_idx]) < 0)
				min_idx = j;
		}
		tmp = tab[i];
		tab[i] = tab[min_idx];
		tab[min_idx] = tmp;
		i++;
	}
}
