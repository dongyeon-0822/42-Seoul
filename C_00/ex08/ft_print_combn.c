/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:53:49 by donkang           #+#    #+#             */
/*   Updated: 2022/01/08 08:42:29 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int	g_flag[10] = {0,};
int	flag[10];
int 	combination(10, r)
{
	if (r == 10)
	{
		int	i;
		i = -1;
		while (++i < 10)
		{
			flag[i] = 1;
		}
	}
}
void	ft_print_combn(int n)
{
	if (n > 0)
	{
		ft_print_combn(--n);
		
	}	
}
