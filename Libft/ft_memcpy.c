/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:54:11 by donkang           #+#    #+#             */
/*   Updated: 2022/04/16 00:32:00 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*dest_p;
	unsigned char	*src_p;

	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	while (num--)
		*dest_p++ = *src_p++;
	return (dest);
}
