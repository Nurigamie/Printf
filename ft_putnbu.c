/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:56:45 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/21 16:56:45 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(unsigned int n, int *nb)
{
	char			c;

	if (n > 9)
		ft_putnbr(n / 10, nb);
	n %= 10;
	c = n + '0';
	*nb = *nb + write(1, &c, 1);
}

void	ft_putnbu(untigned int n, int *count)
{
	*count += write (1,ft_putnbr(n, nb),1);
}
