/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:35:50 by donkang           #+#    #+#             */
/*   Updated: 2022/07/13 13:35:53 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_format(char format)
{
	char	*types;
	int		index;

	types = "cspdiuxX%";
	index = 0;
	while (types[index])
	{
		if (format == types[index])
			return (1);
		index++;
	}
	return (0);
}

int	ft_print_format(char format, va_list *args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(*args, int));
	if (format == 's')
		len += ft_putstr(va_arg(*args, char *));
	if (format == 'p')
		len += ft_pointer(va_arg(*args, void *));
	if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(*args, int));
	if (format == 'u')
		len += ft_unsigned(va_arg(*args, int));
	if (format == 'x')
		len += ft_hexadecimal(va_arg(*args, int));
	if (format == 'X')
		len += ft_hexadecimal_2(va_arg(*args, int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;
	int		len;

	va_start(args, format);
	index = 0;
	len = 0;
	while (format[index])
	{
		if (format[index] == '%' && is_format(format[index + 1]))
		{
			if (format[index + 1] == '%')
				len += ft_putchar('%');
			else
				len += ft_print_format(format[index + 1], &args);
			index++;
		}
		else
			len += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (len);
}
