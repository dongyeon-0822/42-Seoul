/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:35:21 by donkang           #+#    #+#             */
/*   Updated: 2022/04/24 18:57:31 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t num)
{
	size_t				i;
	unsigned char		*tmp;

	i = 0;
	tmp = (unsigned char *)dest;
	while (i < num)
		tmp[i++] = (unsigned char)0;
//ㄴ	return (dest);
}
