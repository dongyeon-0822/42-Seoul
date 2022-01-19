/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:39:56 by donkang           #+#    #+#             */
/*   Updated: 2022/01/18 15:41:44 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_cnt;

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

void	print_chess(int *chess)
{
	char	c;
	int		i;

	i = 0;
	while (++i <= 10)
	{
		c = '0' + chess[i] - 1;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	is_promising(int row, int *chess)
{
	int	i;

	i = 0;
	while (++i < row)
	{
		if (chess[row] == chess[i])
			return (0);
		if (ft_abs(chess[row] - chess[i]) == (row - i))
			return (0);
	}
	return (1);
}

void	queens(int row, int *chess)
{
	int	i;

	if (is_promising(row, chess))
	{
		if (row == 10)
		{
			g_cnt++;
			print_chess(chess);
		}
		else
		{
			i = 0;
			while (++i <= 10)
			{
				chess[row + 1] = i;
				queens(row + 1, chess);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	chess[11];
	int	i;

	g_cnt = 0;
	i = -1;
	while (++i < 11)
		chess[i] = 0;
	queens(0, chess);
	return (g_cnt);
}
