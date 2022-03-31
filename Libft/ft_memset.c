/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:54:34 by donkang           #+#    #+#             */
/*   Updated: 2022/03/31 23:32:21 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	v;

	p = v;
	v = value;
	while (num)
	{
		*p = v;
		num--;
	}
	return (ptr);
}
