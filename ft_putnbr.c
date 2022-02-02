void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		*count += write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		*count += write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, count);
	*count += write(1, &STR_DECIMAL[nb % 10], 1);
}