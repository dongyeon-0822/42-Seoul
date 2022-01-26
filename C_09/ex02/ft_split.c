/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:58:30 by donkang           #+#    #+#             */
/*   Updated: 2022/01/22 19:59:17 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			cnt++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
	}
	return (cnt);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tmp;
	int		i;
	int		len;

	i = 0;
	len = count_words(str, charset);
	tmp = (char **)malloc(sizeof(char *) * (len + 1));
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			tmp[i] = malloc_word(str, charset);
			while (*str && !is_charset(*str, charset))
				str++;
			i++;
		}
	}
	tmp[i] = NULL;
	return (tmp);
}
