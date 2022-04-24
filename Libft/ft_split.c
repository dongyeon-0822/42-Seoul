/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:33:02 by donkang           #+#    #+#             */
/*   Updated: 2022/04/24 17:23:38 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	count_words(char const *str, char c)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (*str != c)
		{
			cnt++;
			while (*str && *str != c)
				str++;
		}
		if (*str)
			str++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char		**tmp;
	char		*str;
	long long	i;

	i = 0;
	tmp = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tmp || !s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			str = (char *)s;
			while (*s && *s != c)
				s++;
			tmp[i] = (char *)malloc(s - str + 1);
			if (!tmp[i])
				return (0);
			ft_strlcpy(tmp[i++], str, s - str + 1);
		}
		if (*s)
			s++;
	}
	tmp[i] = 0;
	return (tmp);
}
