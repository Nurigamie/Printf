void ft_putunsigned(unsigned int nb, char base, int count)
{
    if (nb >= BASE)
        ft_putunsigned(nb/BASE, base, count);
    if (base == HEXALOW)
        *count += write(1, &STR_HEXA_LOWER[nb % BASE], 1);
    else if (base == HEXAUP)
        *count += write(1, &STR_HEXA_UPPER[nb % BASE], 1);
    else 
        *count =+ write(1, &STR_DECIMAL[nb % BASE], 1);

}