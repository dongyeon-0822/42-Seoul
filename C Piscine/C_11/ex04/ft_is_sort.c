/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:25:44 by donkang           #+#    #+#             */
/*   Updated: 2022/01/27 15:03:46 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	flag;
	int	flag_;

	flag_ = 0;
	while (length-- > 1)
	{
		flag = f(tab[length], tab[length - 1]);
		if (flag == 0)
			continue ;
		if (flag_ == 0)
			flag_ = flag;
		else if (flag_ * flag < 0)
			return (0);
	}
	return (1);
}
