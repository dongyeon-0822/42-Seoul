/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:42:19 by donkang           #+#    #+#             */
/*   Updated: 2022/04/17 16:51:59 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;
	size_t	len_hs;
	size_t	len_nd;

	if (!*needle)
		return ((char *)haystack);
	len_hs = ft_strlen((char *)haystack);
	len_nd = ft_strlen((char *)needle);
	if (len_hs < len_nd || len < len_nd)
		return (0);
	if (len_hs > len)
		size = len;
	else
		size = len_hs;
	while (size-- >= len_nd)
	{
		if (!ft_memcmp(haystack, needle, len_nd))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
