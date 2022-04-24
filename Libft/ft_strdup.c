/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:18:54 by donkang           #+#    #+#             */
/*   Updated: 2022/04/17 17:20:28 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str) + 1;
	p = (char *)malloc(sizeof(char) * len);
	if (p)
		ft_strlcpy(p, str, len);
	return (p);
}
