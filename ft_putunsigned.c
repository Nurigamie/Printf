/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:48:45 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/03 15:48:45 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, char base, int *count)
{
	if (nb >= BASE)
		ft_putunsigned(nb / BASE, base, count);
	if (base == HEXALO)
		*count += write (1, &STR_HEXA_LOWER[nb % BASE], 1);
	else if (base == HEXAUP)
		*count += write (1, &STR_HEXA_UPPER[nb % BASE], 1);
	else
		*count += write (1, &STR_DECIMAL[nb % BASE], 1);
}
