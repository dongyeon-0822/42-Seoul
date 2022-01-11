/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:02:16 by donkang           #+#    #+#             */
/*   Updated: 2022/01/11 14:42:56 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i + 1 < size))
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
