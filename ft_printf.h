/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:48:52 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/21 11:52:24 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
size_t		ft_strlen(const char *str);
void	ft_putstr(char*str, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putunsigned(unsigned int nb, char base, int *count);
void	ft_putpointer(unsigned long int nb, int *count);
void	ft_putchar(char c, int *count);


# define BASE ((base == 'u') ? 10 : 16)
# define SPACE ' '
# define PLUS '+'
# define SHARP '#'
# define EXIT_ERROR -1
# define STR_HEXA_LOWER "0123456789abcdef"
# define STR_HEXA_UPPER "0123456789ABCDEF"
# define STR_DECIMAL "0123456789"
# define WRITE_NULL "(null)"

#endif