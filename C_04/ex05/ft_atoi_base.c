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

int	find_loc(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	flag;
	int	result;
	int	len;

	i = 0;
	flag = 1;
	result = 0;
	len = ft_strlen(base);
	if (!is_correct(base))
		return ;
	while (str[i] <= 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			flag *= -1;
	}
	while (str[i] != '\0' && find_loc(base, str[i]) != -1)
	{
		result *= len;
		result += find_loc(base, str[i++]);
	}
	return (result * flag);
}