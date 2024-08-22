/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:13:53 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/13 13:37:33 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_printchar(int c, long int *len);
void	ft_printstr(char *str, long int *len);
void	ft_printnum(long int num, long int *len);
void	ft_print_hex(unsigned int num, int is_upper, long int *len);
void	ft_printptr(unsigned long int ptr, long int *len);

#endif