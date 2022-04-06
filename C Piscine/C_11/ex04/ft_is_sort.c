/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:25:44 by donkang           #+#    #+#             */
/*   Updated: 2022/04/06 19:10:27 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	inc;
	int	dec;

	i = 0;
	inc = 0;
	dec = 0;
	if (length == 0 || length == 1)
		return (1);
	while (i < length -1)
	{
		if (f(tab[i], tab[i + 1])
			inc++;
		if (f(tab[i], tab[i + 1])
			dec++;
		i++;
	}
	if (i == inc || i == dec)
		return (1);
	else
		return (0);
}
