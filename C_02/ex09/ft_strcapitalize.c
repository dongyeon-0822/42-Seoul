/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:58:51 by donkang           #+#    #+#             */
/*   Updated: 2022/01/10 18:58:53 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
    int i;

    if (str[0] >= 'a' || str[0] <= 'z')
        str[0] -= 32;
    i = 1;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' || str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}
