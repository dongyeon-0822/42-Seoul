/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:26:30 by donkang           #+#    #+#             */
/*   Updated: 2022/01/26 21:18:16 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		calc_sum(int a, int b);
int		calc_sub(int a, int b);
int		calc_mul(int a, int b);
int		calc_div(int a, int b);
int		calc_mod(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);

int	ft_atoi(char *str)
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
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * flag);
}

int	calc_op(char *op)
{
	if (!ft_strcmp(op, "+"))
		return (0);
	else if (!ft_strcmp(op, "-"))
		return (1);
	else if (!ft_strcmp(op, "*"))
		return (2);
	else if (!ft_strcmp(op, "/"))
		return (3);
	else if (!ft_strcmp(op, "%"))
		return (4);
	else
		return (-1);
}

int	do_op(int a, int b, char *op)
{
	int	(*calc[5])(int x, int y);
	int	operator;

	calc[0] = calc_sum;
	calc[1] = calc_sub;
	calc[2] = calc_mul;
	calc[3] = calc_div;
	calc[4] = calc_mod;
	operator = calc_op(op);
	if (operator < 0)
		return (0);
	else if (operator == 3 && b == 0)
		return (-1);
	else if (operator == 4 && b == 0)
		return (-2);
	else
		return ((*calc[operator])(a, b));
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	*op;
	int		result;

	if (ac == 4)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		op = av[2];
		result = do_op(a, b, op);
		if (result == -1)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (result == -2)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		ft_putnbr(result);
		write(1, "\n", 1);
	}
	return (0);
}
