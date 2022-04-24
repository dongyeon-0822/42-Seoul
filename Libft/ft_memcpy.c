/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:54:11 by donkang           #+#    #+#             */
/*   Updated: 2022/04/24 18:37:31 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t num)
{
	char	*p_dest;
	char	*p_src;
	size_t	i;

	if (dest == src)
		return (dest);
	p_dest = dest;
	p_src = (char *)src;
	i = 0;
	while (num--)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (p_dest);
}
