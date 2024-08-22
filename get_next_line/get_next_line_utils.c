/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:57:14 by rasoares          #+#    #+#             */
/*   Updated: 2024/08/22 14:30:40 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s || !*s)
		return (0);
	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return(i + (s[i] == '\n'));
}
char	ft_strjoin (char *str, char *buffer)
{
	int	i;
	int	j;
	char	*newstr;

	newstr = (char *)malloc(ft_strlen(str) + ft_strlen(buffer) + 1);
	if (!newstr)
		return (0);
	while (str[i] && str)
	{
		newstr[i] = str[i];
		i++;
	}
	while (buffer[j])
	{
		newstr[i + j] = buffer[j];
		if (buffer[j++] == '\n')
			break ;
	}
	newstr[i] = '\0';
	return (newstr);
}

int	ft_find(char *buffer, int i)
{
	char	*b;
	char	*t;

	b = buffer;
	t = buffer;
	while (*b)
	{
		if (*b == '\n')
		{
			i = 1;
			*b++ = '\0';
			break ;
		}
		*b++ = '\0';
	}
	if (i == 1)
	{
		while (*b)
		{
			*t++ = *b;
			*b++ = '\0';
		}
	}
	return (i);
}