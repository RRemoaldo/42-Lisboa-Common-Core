/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:34:58 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:45:40 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int	main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*current;

	node1 = ft_lstnew("alo");
	node2 = ft_lstnew("ola");
	ft_lstadd_front(&node2, node1);

	current = node1;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	free(node1);
	free(node2);
	return (0);
}*/