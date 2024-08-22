/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:25:46 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:46:21 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*int	main()
{
	t_list	*node1;
	t_list	*node2;
	
	node1 = ft_lstnew((void *)10);
	node2 = ft_lstnew((void *)15);
	free(node1);
	free(node2);
}*/