/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:37 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/17 15:03:26 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wc++;
			while (s[i] != c && s[i])
				i++;
		}
		else
		{
			while (s[i] == c && s[i])
				i++;
		}
	}
	return (wc);
}

int	check_memory(char **split, int j)
{
	if (split[j] == NULL)
	{
		while (j >= 0)
		{
			free(split[j]);
			j--;
		}
		free (split);
		return (0);
	}
	return (1);
}

int	whileloop(char const *s, char c, char **split)
{
	int	i;
	int	start;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			split[j] = ft_substr(s, start, i - start);
			if (!split[j])
			{
				check_memory(split, j);
				return (0);
			}
			j++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split || !s)
		return (NULL);
	if (!whileloop(s, c, split))
		return (NULL);
	split[words] = NULL;
	return (split);
}

/*
#include "libft.h"

int main(void) {
    char const *str = "Grande teste caracas z olha outro z e mais um z ";
    char **split = ft_split(str, 'z');

    if (!split) {
        printf("Erro ao dividir a string.\n");
        return 1;
    }
    for (int i = 0; split[i] != NULL; i++) {
        printf("Palavra %d: %s\n", i + 1, split[i]);
    }
    for (int i = 0; split[i] != NULL; i++) {
        free(split[i]);
    }
    free(split);

    return 0;
}
*/