/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_a_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <rbordin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:37:16 by rbordin           #+#    #+#             */
/*   Updated: 2023/02/14 13:44:51 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putpointer(unsigned long long ptr)
{
    int len;

    len = 0
    if  (ptr == 0)
    {
        len += ft_putstr("0x0");
        return (len);
    }
    else
    {
        len += ft_putstr("0x");
        len += ft_count16p(ptr);
        ft_printhexadecimallower(ptr);
    }
    return (len);    
}

int ft_printhexadecimallower(int n)
{
    int count;
    int i;
    
    count = ft_count16(n);
    if (n > 15)
    {
        ft_printhexadecimallower(p / 16);
        ft_printhexadecimallower(p % 16);
    }
    else
    {
        if (n > 9)
            ft_putchar(n - 10 + 'a');
        else
            ft_putchar(n + 48);
    }
    return (count):
}

int ft_printhexadecimalupper(int n)
{
    int count;
    int i;
    
    count = ft_count16(n);
    if (n > 15)
    {
        ft_printhexadecimallower(p / 16);
        ft_printhexadecimallower(p % 16);
    }
    else
    {
        if (n > 9)
            ft_putchar(n - 10 + 'A');
        else
            ft_putchar(n + 48);
    }
    return (count):
}

int	ft_count16(unsigned long long ptr)
{
	int	count;

	count = 0;
	while (ptr > 0)
	{
		ptr /= 16;
		count++;
	}
	return (count);
}

int ft_printunsignedint(unsigned int n)
{
    unsigned int	i;

	i = ft_unsigned_count(n);
    write(1, n, i);
	return (i);
}