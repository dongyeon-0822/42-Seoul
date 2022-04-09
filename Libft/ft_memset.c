/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:54:34 by donkang           #+#    #+#             */
/*   Updated: 2022/03/31 23:32:21 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int value, size_t num)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)dest;
	while (num--)
		*tmp++ = (unsigned char)value;
	return (dest);
}
