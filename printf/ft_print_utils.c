/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riccardobordin <riccardobordin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:52:48 by riccardobor       #+#    #+#             */
/*   Updated: 2023/02/11 12:54:31 by riccardobor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdarg.h>

void    ft_putchar(va_list args)
{
    write(1, &s1, 1);
}

void ft_putstr(va_list args)
{
    int i;

    i = 0;
    while (args[i])
    {
        write(1, &args[i], 1);
        i++;
    }
}

int	ft_count(va_list args)
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

void ft_putnbr_fd(va_list args)
{
	int	i;

	i = ft_count(args);
    write(1, args, i);
}

void ft_putpointer(va_list args)
{
    
}