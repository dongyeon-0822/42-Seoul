/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:56:33 by donkang           #+#    #+#             */
/*   Updated: 2022/01/26 21:30:25 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*tmp;
	int	i;

	tmp = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{	
		tmp[i] = f(tab[i]);
		i++;
	}
	return (tmp);
}
