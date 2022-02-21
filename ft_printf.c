/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:27:54 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/17 13:27:54 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(char c, va_list ap, int *nb)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), nb);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), nb);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(ap, int), nb);
	else if (c == 'X' || c == 'x')
		ft_putunsigned(va_arg(ap, unsigned int), c, nb);
	else if (c == 'u')
		ft_putnbu(va_arg(ap, unsigned int), nb);
	else if (c == 'p')
		ft_putpointer(va_arg(ap, unsigned long int), nb);
	else
		*nb += write (1, &c, 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	va_start(ap, str);
	if (str == NULL)
		return (EXIT_ERROR);
	while (str[i])
	{
		if (str[i] == '%')
			ft_format(str[i], ap, &nb);
		else
			nb += write(1, str + i, 1);
		i++;
	}
	va_end(ap);
	return (nb);
}
