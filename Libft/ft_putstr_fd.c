/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:38:10 by donkang           #+#    #+#             */
/*   Updated: 2022/04/24 17:40:01 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	char	c;

	i = 0;
	if (fd >= 0)
	{
		while (s[i])
		{
			c = s[i++];
			write(fd, &c, 1);
		}
	}
	return ;
}
