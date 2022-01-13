/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:45:50 by donkang           #+#    #+#             */
/*   Updated: 2022/01/12 01:51:46 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr(unsigned long long addr, unsigned int cnt)
{
	if (addr != 0)
	{
		print_addr(addr / 16, cnt - 1);
		write(1, &"0123456789abcdef"[addr % 16], 1);
	}
	else
	{
		while (cnt-- > 0)
			write(1, "0", 1);
	}
}

void	print_hex(char *str, unsigned int bit)
{
	int	cnt;

	cnt = 16;
	bit += 1;
	write(1, ": ", 2);
	while (--cnt >= 0 && --bit)
	{
		write(1, &"0123456789abcdef"[*((unsigned char *) str) / 16], 1);
		write(1, &"0123456789abcdef"[*((unsigned char *) str) % 16], 1);
		if (cnt % 2 == 0)
			write(1, " ", 1);
		str++;
	}
	while (cnt >= 0)
	{
		write(1, "  ", 2);
		if (cnt % 2 == 0)
			write(1, "  ", 1);
		cnt--;
	}
}

void	print_str(char *str, unsigned int bit)
{
	bit += 1;
	while (--bit)
	{
		if (*str <= 31 || *str >= 127)
			write(1, ".", 1);
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	bit;
	char			*buf;

	buf = (char *)addr;
	bit = size;
	while (*buf && bit)
	{
		print_addr((unsigned long long)buf, 16);
		print_hex(buf, bit);
		print_str(buf, bit);
		buf += 16;
		bit -= 16;
	}
	return (addr);
}
