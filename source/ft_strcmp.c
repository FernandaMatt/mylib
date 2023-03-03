int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] && s2[i] && (s1[i] == s2[i]))
		{
			i++;
		}
		c1 = s1[i];
		c2 = s2[i];
		return (c1 - c2);
	}
	else
		return (-1);
}
