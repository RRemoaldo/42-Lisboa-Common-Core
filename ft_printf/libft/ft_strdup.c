/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:16:41 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:49:12 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	new = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*int main()
{
	const char *original = "Hello, world!";
	char *copied;

	copied = ft_strdup(original);

	if (copied != NULL)
	{
		printf("String original: %s\n", original);
		printf("String duplicada: %s\n", copied);
		free(copied);
	}
	else
	{
		printf("Erro: falha ao duplicar a string.\n");
	}
	return (0);
}*/