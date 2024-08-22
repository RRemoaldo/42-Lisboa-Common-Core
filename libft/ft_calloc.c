/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:16:00 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:40:48 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*dest;

	if (nmemb == 0 || size == 0)
	{
		dest = malloc(0);
		if (!dest)
			return (NULL);
		return (dest);
	}
	if ((nmemb * size) / nmemb != size)
		return (NULL);
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (nmemb * size));
	return (dest);
}

/*
int	main()
{
	int *array = (int *)ft_calloc(5, sizeof(int));

	if (array == NULL)
	{
		printf("Erro: Falha ao alocar memória.\n");
		return 1;
	}
	free(array);

    return (0);
}
*/
