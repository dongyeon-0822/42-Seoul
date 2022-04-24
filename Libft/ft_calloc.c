/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:17:12 by donkang           #+#    #+#             */
/*   Updated: 2022/04/17 17:18:31 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	void	*p;

	s = count * size;
	p = malloc(s);
	if (!p)
		return (NULL);
	ft_bzero(p, s);
	return (p);
}