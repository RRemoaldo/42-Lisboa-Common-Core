/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:14:01 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:49:04 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while ((char)c != *str)
	{
		if (!*str)
			return (0);
		str++;
	}
	return ((char *)str);
}
/*
int	main()
{
	const char *d = "Hello, world!";
	int h = 'o';
	char *re = ft_strchr(d, h);
	if (re != NULL)
		printf("chara '%c' position : %d\n", h, re - d);
	else
		printf("chara '%c not found\n", h);
	return (0);
}*/