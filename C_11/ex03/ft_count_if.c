/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:13:29 by donkang           #+#    #+#             */
/*   Updated: 2022/01/26 15:20:22 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	cnt;

	cnt = 0;
	while (length--)
	{
		if (f(tab[length]) != 0)
			cnt++;
	}
	return (cnt);
}
