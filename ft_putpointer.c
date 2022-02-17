/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:49:00 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/03 15:49:00 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_long(unsigned long int nb, int *count)
{
	if (nb >= 16)
		ft_long(nb / 16, count);
	*count += write(1, &STR_HEXA_LOWER[nb % 16], 1);
}

void	ft_putpointer(unsigned long int nb, int *count)
{
	*count += write(1, "0x", 2);
	ft_long(nb, count);
}
