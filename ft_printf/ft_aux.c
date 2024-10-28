/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:13:51 by rasoares          #+#    #+#             */
/*   Updated: 2024/08/27 20:03:20 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(int c, long int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_printstr(char *str, long int *len)
{
	if (!str)
	{
		ft_printstr("(null)", len);
		return ;
	}
	while (*str)
	{
		ft_printchar(*str, len);
		str++;
	}
}

void	ft_printnum(long int num, long int *len)
{
	if (num < 0)
	{
		ft_printchar('-', len);
		num = -num;
	}
	if (num > 9)
		ft_printnum(num / 10, len);
	ft_printchar((num % 10) + '0', len);
}

void	ft_print_hex(unsigned int num, int is_upper, long int *len)
{
	char	*exchar;

	if (is_upper)
		exchar = "0123456789ABCDEF";
	else
		exchar = "0123456789abcdef";
	if (num >= 16)
		ft_print_hex(num / 16, is_upper, len);
	ft_printchar(exchar[num % 16], len);
}

void	ft_printptr(unsigned long int ptr, long int *len)
{
	static int	first_call = 1;
	char		*exchar;

	if (!ptr)
	{
		ft_printstr("(nil)", len);
		return ;
	}
	if (first_call)
	{
		ft_printstr("0x", len);
		first_call = 0;
	}
	exchar = "0123456789abcdef";
	if (ptr >= 16)
		ft_printptr(ptr / 16, len);
	ft_printchar(exchar[ptr % 16], len);
	if (ptr < 16)
		first_call = 1;
}
