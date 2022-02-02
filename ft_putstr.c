void    ft_pustr(char*str, int *count)
{
    if (!str)
        *count += write(1, WRITE_NULL, 6);
    else 
        while (*str)
        {
            *count += write(1, str++, 1);
        }
}