/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:29:29 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:45:11 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*int main()
{
	t_list	*list = NULL;
	t_list	*node1;
	t_list	*node2;
	
	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	printf("Conteúdos da lista:\n");
	t_list *current = list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	while (list != NULL)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}
	return (0);
}*/