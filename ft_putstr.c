/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:48:57 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/03 15:48:57 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pustr(char*str, int *count)
{
	if (!str)
		*count = *count + write(1, WRITE_NULL, 6);
	else
		while (*str)
			*count += write(1, str++, 1);
}
