#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_correct(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (!is_correct(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base(2147483648 / len, base);
		ft_putnbr_base(2147483648 % len, base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < len)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	ft_putnbr_base(nbr / len, base);
	ft_putnbr_base(nbr % len, base);
}