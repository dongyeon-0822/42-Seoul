/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:53:49 by donkang           #+#    #+#             */
/*   Updated: 2022/01/08 21:29:18 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_data[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char	g_flag[10] = {'0',};

void	combination(int r, int index, int depth)
{
	int i;

	if (depth == r)
	{
		i = -1;
		while (++i < r)
		{
			write(1, &g_flag[i], 1);
		}
		write(1, "\n", 1);
		return;
	}
	else
	{
		i = index - 1;
		while(++i < 10)
		{
			g_flag[depth] = g_data[i];
			combination(r, i + 1, depth + 1);
		}
	}
}
void	ft_print_combn(int n)
{
	combination(n, 0, 0);
}
int	main(void)
{
	ft_print_combn(3);	
	return (0);
}
