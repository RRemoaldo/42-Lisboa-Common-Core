/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:14:15 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:51:14 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	if (c == 0)
		return ((char *)str + i + 1);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
/*
int	main()
{
	const char *str = "Hello, world!";
	int search_char = 'o';
	char *result = ft_strrchr(str, search_char);

	if (result != NULL)
	{
		printf("Última ocorrência de '%c' em '%s' encontrada em: %ld\n", 
		search_char, str, result - str);
	}
	else
	{
		printf("Caractere '%c' não encontrado em '%s'\n", search_char, str);
	}
	return (0);
}
*/