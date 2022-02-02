void ft_long(unsigned long int nb, int *count)
{
    if (nb >= 16)
        ft_long(nb/16, count);
    *count += write(1, &STR_HEXA_LOW[nb % 16], 1);
}

void ft_putpointer(unsigned long int nb, int *count)
{
    *count += write(1, "0x", 2);
    ft_long(nb, count);
}