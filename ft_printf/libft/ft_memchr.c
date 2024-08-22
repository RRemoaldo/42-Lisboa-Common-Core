/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:14:48 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:47:10 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char		*p;
	size_t		i;

	i = 0;
	p = (char *)str;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
/*
int	main()
{
	const	char	str[] = "Hello, world!";
	int	c = 'o';
	size_t	len = ft_strlen(str);
	void	*result;

	result = ft_memchr(str, c, len);

	if (result != NULL)
	{
		printf("Caractere '%c' encontrado em '%s' na posição: %ld\n", 
		c, str, (char *)result - str);
	}
	else
	{
		printf("Caractere '%c' não encontrado em '%s'\n", c, str);
	}
	return (0);
}*/