/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:16:18 by donkang           #+#    #+#             */
/*   Updated: 2022/01/14 15:23:58 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char* str)
{
	int	i;
	int	flag;
	int	result;

	i = 0;
	flag = 1;
	result = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >='0' && str[i] <='9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * flag);
}
