/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:37:26 by donkang           #+#    #+#             */
/*   Updated: 2022/04/24 18:45:13 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*p_src;
	unsigned char	*p_dest;

	if (dest == src || !num)
		return (dest);
	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	if (dest < src)
		return (ft_memcpy(dest, src, num));
	while (num--)
		*(p_dest + num) = *(p_src + num);
	return (dest);
}
