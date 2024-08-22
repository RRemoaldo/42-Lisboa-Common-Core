/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:15:25 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:51:07 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && i + j < n)
		{
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}
/*
int	main()
{
	const char	*str = "os dentes caem quando o paulinho marca";
	const char	*find = "caem";
    size_t  n = 13;
    char    *result= ft_strnstr(str, find, n);

	printf("%s\n", result);
    return (0);
}*/