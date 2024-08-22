/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:59 by rasoanew          #+#    #+#             */
/*   Updated: 2024/05/07 17:50:45 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (!s)
		return (NULL);
	new = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
char	convert_to_uppercase(unsigned int index, char character)
{
	if (index % 2 == 1)
	{
		if (character >= 'a' && character <= 'z')
		{
			return (character - 32);
		}
	}
	return (character);
}
int	main()
{
	const char *original = "hello world";
	char *result;

	result = ft_strmapi(original, &convert_to_uppercase);

	if (result != NULL)
	{
		printf("String original: %s\n", original);
		printf("String resultante: %s\n", result);
		free(result);
	}
	else
	{
		printf("Erro: falha ao alocar memória.\n");
	}
	return 0;
}*/