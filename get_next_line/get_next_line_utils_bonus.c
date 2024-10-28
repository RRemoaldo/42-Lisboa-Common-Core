/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:32:20 by rasoares          #+#    #+#             */
/*   Updated: 2024/10/28 17:49:53 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != 10)
		i++;
	if (str[i] == 10)
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*retn;
	size_t	i;

	retn = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!retn)
		return (NULL);
	i = 0;
	while (str1 && str1[i])
	{
		retn[i] = str1[i];
		i++;
	}
	free(str1);
	while (*str2)
	{
		retn[i++] = *str2;
		if (*str2++ == 10)
			break ;
	}
	retn[i] = 0;
	return (retn);
}

int	newline(char *buf)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 0;
	while (buf[i])
	{
		if (b == 1)
			buf[a++] = buf[i];
		if (buf[i] == 10)
			b = 1;
		buf[i++] = 0;
	}
	return (b);
}
