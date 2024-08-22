/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:12:26 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:47:42 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d == NULL && s == NULL)
	{
		return (NULL);
	}
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "Hello World!";
	char	dest[150];
	size_t	n = sizeof(src);

	ft_memcpy(dest, src, n);
	printf("dest: %s\n", dest);
	return (0);
}*/