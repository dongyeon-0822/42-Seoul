/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:13:58 by donkang           #+#    #+#             */
/*   Updated: 2022/01/10 18:14:00 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 'A' || str[i] >= 'Z')
            return (0);
    }
    return (1);
}
