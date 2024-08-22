/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:25:29 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:44:44 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if ((i >= '0' && i <= '9'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main()
{
	char i = '1';
	printf("%d\n", ft_isdigit(i));
	return(0);
}*/
