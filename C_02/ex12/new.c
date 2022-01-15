#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_addr(unsigned long long addr, unsigned int cnt)
{
	if (addr != 0)
	{
		print_addr(addr / 16, cnt + 1);
		ft_putchar("0123456789abcdef"[addr % 16]);
	}
	else
	{
		while (cnt < 16)
		{
			ft_putchar('0');
			cnt ++;
		}
	}
}

void	print_hex(unsigned char *addr, unsigned int len)
{
	unsigned int	i;

	i = 0;
    ft_putchar(':');
	while (i < len)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		ft_putchar("0123456789abcdef"[(int)addr[i] / 16]);
		ft_putchar("0123456789abcdef"[(int)addr[i] % 16]);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
		i++;
	}
}

void	print_str(char *str, unsigned int len)
{
	unsigned int	i;

	i = 0;
    ft_putchar(' ');
	while (i < len)
	{
		if (*str <= 31 || *str >= 127)
			write(1, ".", 1);
		else
			write(1, str, 1);
		str++;
        i++;
	}
	write(1, "\n", 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	bit;
	unsigned int	buf;

	bit = 0;
	while (size > 0)
	{
		if (size > 16)
			buf = 16;
		else
			buf = size;
		print_addr((unsigned long long)addr + bit, 0);
		print_hex((unsigned char *)addr + bit, buf);
		print_str((char *)addr + bit, buf);
		bit += 16;
        size -= buf;
	}
}