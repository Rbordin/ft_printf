/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riccardobordin <riccardobordin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:28:12 by riccardobor       #+#    #+#             */
/*   Updated: 2023/02/12 14:27:43 by riccardobor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
void ft_middle_step(va_list args, char indications)
{
    if (!args || !indications)
        return ;

    if (indications == "c")
        ft_putchar(args);
    else if (indications == "s")
        ft_putstr(args);
    else if (indications == "d")
        ft_putnbr(args);
    else if (indications == "p")
        ft_putpointer(args);
    else if (indications == "i")
        ft_printbaseten(args);
    else if (indications == "u")
        ft_printunsignedint(args);
    else if (indications == "x")
        ft_printhexadecimallower(args);
    else if (indications == "X")
        ft_printhexadecimalupper(args);
    else if (indications == "%")
        write(1, "%", 1);

    return ;
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