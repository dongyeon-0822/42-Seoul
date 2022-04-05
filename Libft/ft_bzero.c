/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:35:21 by donkang           #+#    #+#             */
/*   Updated: 2022/04/05 23:39:35 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int value, size_t size)
{
	unsigned char	*temp;

	temp = (unsigned char *)dest;
	while (size--)
		*temp++ = (unsigned char)value;
	return (dest);
}

void	*ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, 0, len);
}
