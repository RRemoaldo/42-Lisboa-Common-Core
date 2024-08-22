/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:12:09 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/15 15:13:33 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

/*int	main()
{
	char	buffer[10];
	strcpy(buffer, "abcdefg");
	printf("Antes do ft_bzero : %s\n", buffer);
	ft_bzero(buffer, sizeof(buffer));
	printf("Depois do ft_bzero: %s\n", buffer);
	return (0);
}*/
