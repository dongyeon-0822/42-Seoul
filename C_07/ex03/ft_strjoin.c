/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:30:26 by donkang           #+#    #+#             */
/*   Updated: 2022/01/20 12:08:42 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	unsigned int	len;
	char	*str;

	i = -1;
	len = 0;
	while (++i < size)
	{
		len += ft_strlen(strs[i]);
		if (i != size -1)
			len += ft_strlen(sep);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size -1)
			ft_strcat(str, sep);
	}
	str[len] = '\0';
	return (str);
}
