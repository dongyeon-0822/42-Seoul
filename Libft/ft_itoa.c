/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:13:25 by donkang           #+#    #+#             */
/*   Updated: 2022/04/24 17:22:01 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(long long n)
{
	int	len;

	if (n == 0 || n == -0)
		return (1);
	len = 0;
	if (n < 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	long long		nbr;
	char			*result;

	len = nbr_len(n);
	nbr = (long long)n;
	if (n < 0)
		nbr *= -1;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	while (len >= 0)
	{
		result[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
