/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:06 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/16 11:45:47 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;
	size_t		i;
	int			x;

	i = -1;
	x = 0;
	if (!s1 || !s2)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (++i < ft_strlen(s1))
	{
		new[x] = s1[i];
		x++;
	}
	i = -1;
	while (++i < ft_strlen(s2))
	{
		new[x] = s2[i];
		x++;
	}
	new[x] = '\0';
	return (new);
}
/*int	main()
{
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);

    if (result == NULL)
    {
        printf("Erro: erro\n");
        return 1;
    }
    printf("Strings concatenadas: %s\n", result);
    free(result);
    return 0;
}*/