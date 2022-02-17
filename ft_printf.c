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
	if (c == CHAR)
		ft_putchar(va_arg(ap, int), nb);
	else if (c == STRING)
		ft_putstr(va_arg(ap, char *), nb);
	else if (c == INTEGER || c == DECIMAL)
		ft_putnbr(va_arg(ap, int), nb);
	else if (c == UNSIGNED || c == HEXAUP || c == HEXALO)
		ft_putunsigned(va_arg(ap, unsigned int), c, nb);
	else if (c == POINTER)
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
	i = -1;
	if (str == NULL)
		return (EXIT_ERROR);
	while (str)
	{
		if (str[i] == PERCENT)
			ft_format(str[i], ap, &nb);
		else
			nb += write(1, str + i, 1);
	i++;
	}
	return (va_end(ap), nb);
}
