/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:17:29 by donkang           #+#    #+#             */
/*   Updated: 2022/07/11 18:17:31 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_hex_sx(unsigned int nbr);
int	ft_hex_lx(unsigned int nbr);
int	ft_unsigned(int nbr);
int	ft_pointer(void *ptr);
int	ft_pointerhex(unsigned long nbr);
#endif
