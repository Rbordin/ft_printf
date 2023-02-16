/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <rbordin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:37:49 by rbordin           #+#    #+#             */
/*   Updated: 2023/02/14 13:35:10 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarh.h>
# include <unistd.h>

int ft_printf(const char *s1, ...);
int ft_check_args(const char *s1);
int ft_middle_step(va_list args, char indication);
int ft_putchar(char s1);
int ft_putstr(char *s1);
int ft_count(long n);
int ft_putnbr(long n);
int	ft_unsigned_count(unsigned int n);
int ft_putpointer(unsigned long long ptr);
int ft_printhexadecimallower(int n);
int ft_printhexadecimalupper(int n);
int	ft_count16(unsigned long long ptr);
int ft_printunsignedint(unsigned int n);

#endif