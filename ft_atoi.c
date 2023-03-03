static char	*ft_wspaces(char *str)
{
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	return (str);
}

static int	ft_catnbr(char *str)
{
	unsigned int	c;
	unsigned int	mult;
	int				result;

	c = 0;
	while (str[c] >= '0' && str[c] <= '9' && str[c] != 0)
		c++;
	mult = 1;
	result = 0;
	while (c > 0)
	{
		result += (str[c - 1] - '0') * mult;
		mult *= 10;
		c--;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	result;

	result = 1;
	str = ft_wspaces(str);
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			result = -1;
		str++;
	}
	result *= ft_catnbr(str);
	return (result);
}
