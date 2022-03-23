/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:20:16 by donkang           #+#    #+#             */
/*   Updated: 2022/01/18 22:02:42 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (0);
	i = 0;
	while (min < max)
		p[i++] = min++;
	return (p);
}
