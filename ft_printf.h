/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:25:03 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/02 21:25:03 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #ifndef FT_PRINTF_H
    # define FT_PRINTF_H

    # include <stdarg.h>
    # include <unistd.h>
    # include <stdio.h>

    int ft_printf(const char *str, .. );
    int ft_lenint int(int nb);
    int	ft_strlen(const char *str);
    void    ft_pustr(char*str, int *count);
    void	ft_putnbr(int nb, int *count);
    void ft_putunsigned(unsigned int nb, char base, int count);
    void ft_long(unsigned long int nb, int *count);
    void	ft_putchar(char c, int *count);

    # define BASE ((base == 'u') ? 10 : 16)
    # define SPACE ' '
    # define PLUS '+'
    # define STRING 's'
    # define CHAR 'c'
    # define UNSIGNED 'u'
    # define POINTER 'p'
    # define HEXALO 'x'
    # define HEXAUP 'X'
    # define DECIMAL 'd'
    # define INTEGER 'i'
    # define PERCENT '%'
    # define SHARP '#'
    # define EXIT_ERROR -1
    # define STR_HEXA_LOWER "0123456789abcdef"
    # define STR_HEXA_UPPER "0123456789ABCDEF"
    # define STR_DECIMAL "0123456789"
    # define WRITE_NULL "(null)"

    #endif