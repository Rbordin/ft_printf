/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <rbordin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:52:48 by riccardobor       #+#    #+#             */
/*   Updated: 2023/02/14 13:44:53 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putchar(char s1)
{
    write(1, &s1, 1);
	return (1);
}

int	ft_putstr(char *s1)
{
    int i;

    i = 0;
    while (args[i])
    {
        write(1, &s1[i], 1);
        i++;
    }
	return (i);
}

int	ft_count(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int ft_putnbr(long	n)
{
	int	i;

	i = ft_count(n);
    write(1, n, i);
	return (i);
}

int	ft_unsigned_count(unsigned int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
