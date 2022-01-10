/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:41:34 by donkang           #+#    #+#             */
/*   Updated: 2022/01/10 19:41:37 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr_non_printable(char *str)
{
    int	i;

	i = 0;
	while (str[i] != '\0')
	{
        if ((str[i] >= 0 && str[i] <= 31 )|| str[i] == 127)
        {
            write(1, "\\", 1);
            
        }
		write(1, &str[i], 1);
		i++;
	}
}
