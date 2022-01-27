int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	tmp;
	int tmp_s;

	tmp_s = 0;
	while (length-- > 1)
	{
		tmp = f(tab[length], tab[length - 1]);
		if (tmp == 0)
			continue;
		if (tmp_s == 0)
			tmp_s = tmp;
		else if ((tmp_s > 0 && tmp < 0) || (tmp_s < 0 && tmp > 0))
			return (0);
	}
	return (1);
}