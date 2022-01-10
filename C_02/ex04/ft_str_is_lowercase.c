/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:44:18 by donkang           #+#    #+#             */
/*   Updated: 2022/01/10 18:08:50 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 'a' || str[i] >= 'z')
            return (0);
    }
    return (1);
}
