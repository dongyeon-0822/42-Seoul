/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 01:56:31 by donkang           #+#    #+#             */
/*   Updated: 2022/01/12 02:44:51 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && i < nb)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
