int ft_lenint int(int nb)
{
    int i ;

    i  = 0;
    if (nb < 0)
        nb *= -1;
    while (nb > 9)
    {
        nb /= 10;
        i ++
    }
    return (i + 1);
}