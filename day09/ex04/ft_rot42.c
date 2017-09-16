char	*ft_rot42(char *str)
{
	while (*str)
	{
		*str = *str + (*str * 46) % 26;
		str++;
	}
	return (&str[0]);
}
