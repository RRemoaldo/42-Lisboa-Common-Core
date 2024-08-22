/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:20 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/16 12:18:41 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	new = NULL;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		new = malloc(sizeof(char) * (j - i + 1));
		if (!new)
			return (0);
		ft_strlcpy(new, &s1[i], j - i + 1);
	}
	return (new);
}
/*
int	main() 
{
	char *s1 = "   hello world   ";
	char *set = " ";
	char *trimmed_str = ft_strtrim(s1, set);

	printf("String original: \"%s\"\n", s1);
	printf("String após remoção de espaços em branco: \"%s\"\n", trimmed_str);
	free(trimmed_str);
	return (0);
}
*/