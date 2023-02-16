/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <rbordin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:28:12 by riccardobor       #+#    #+#             */
/*   Updated: 2023/02/14 13:26:58 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char ft_check_args(const char *s1)
{    int i;

    i = 0;
    if (!s1)
        return (NULL);
    while (s1[i] != "%")
        i++;
    i++;
    return (s1[i]);
}
int ft_middle_step(va_list args, char indications)
{
    int len;
    
    if (!args || !indications)
        return (0);
    if (indications == "c")
        len += ft_putchar(va_args(args, int);
    else if (indications == "s")
        len += ft_putstr(va_args(args, char *);
    else if (indications == "d" || indications == "i")
        len += ft_putnbr(va_args(args, long);
    else if (indications == "p")
        len += ft_putpointer(va_args(args, unsigned long long);
    else if (indications == "u")
        len += ft_printunsignedint(va_args(args, unsigned int);
    else if (indications == "x")
        len += ft_printhexadecimallower(va_args(args, int);
    else if (indications == "X")
        len += ft_printhexadecimalupper(va_args(args, int);
    else if (indications == "%")
        len += write(1, "%", 1);

    return (len);
}

int ft_printf(const char *s1, ...)
{
    va_list ap;
    char    indications;

    va_start(ap, args);
    indications = ft_check_args(s1);
    ft_middle_step(args, indications);


    va_end(ap);
}