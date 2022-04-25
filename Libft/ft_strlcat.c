/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:42:01 by donkang           #+#    #+#             */
/*   Updated: 2022/04/06 20:51:07 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destsize;
	size_t	srcsize;
	size_t	idx;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	idx = 0;
	if (destsize >= size)
		return (srcsize + size);
	while (src[idx] && destsize + idx + 1 < size)
	{
		dest[destsize + idx] = src[idx];
		idx++;
	}
	dest[destsize + idx] = '\0';
	return (srcsize + destsize);
}
