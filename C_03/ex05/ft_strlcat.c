/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 01:57:07 by donkang           #+#    #+#             */
/*   Updated: 2022/01/12 03:27:11 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destsize;
	unsigned int	srcsize;
	unsigned int	idx;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	idx = 0;
	while (*dest)
	{
		dest++;
		idx++;
	}
	while (*src && idx + 1 < size)
	{
		*dest++ = *src++;
		idx++;
	}
	*dest = '\0';
	if (destsize > size)
		return (srcsize + size);
	else
		return (srcsize + destsize);
}
