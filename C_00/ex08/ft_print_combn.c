/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:53:49 by donkang           #+#    #+#             */
/*   Updated: 2022/01/09 13:17:41 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_data[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char	g_flag[10] = {'0'};
int		g_cnt;

int	cnt_comb(int n)
{
	int	a;
	int	b;
	int	x;
	int	y;
	int	i;

	a = 1;
	b = 1;
	x = 10;
	y = n;
	i = -1;
	while (++i < n)
	{
		a *= x--;
		b *= y--;
	}
	return (a / b);
}

void	combination(int r, int index, int depth, int cnt)
{
	int	i;

	if (depth == r)
	{
		i = -1;
		while (++i < r)
			write(1, &g_flag[i], 1);
		if (++g_cnt < cnt)
			write(1, ", ", 2);
		return ;
	}
	else
	{
		i = index - 1;
		while (++i < 10)
		{
			g_flag[depth] = g_data[i];
			combination(r, i + 1, depth + 1, cnt);
		}
	}
}

void	ft_print_combn(int n)
{	
	int	cnt;

	g_cnt = 0;
	cnt = cnt_comb(n);
	combination(n, 0, 0, cnt);
}
