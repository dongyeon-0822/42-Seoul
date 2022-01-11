/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:41:34 by donkang           #+#    #+#             */
/*   Updated: 2022/01/11 23:42:57 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int n)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[n / 16], 1);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0)
		{
			n = str[i] + 256;
			print_hex(n);
		}
		else if ((str[i] >= 0 && str[i] <= 31) || str[i] >= 127)
		{
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
