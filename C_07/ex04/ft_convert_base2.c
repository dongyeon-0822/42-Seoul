/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:18:36 by donkang           #+#    #+#             */
/*   Updated: 2022/01/22 20:18:41 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(char *str);

int	nbr_len(int nbr, int base_len)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr > 0)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		len;
	char	*tmp;
	long long	n;

	len = nbr_len(n, ft_strlen(base));
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	n = nbr;
	if (n == 0)
	{
		tmp[0] = base[0];
		tmp[1] = '\0';
		return (tmp);
	}
	if (n < 0)
	{
		tmp[0] = '-';
		n *= -1;
	}
	tmp[len] = '\0';
	while (n > 0)
	{
		tmp[--len] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	return (tmp);
}

