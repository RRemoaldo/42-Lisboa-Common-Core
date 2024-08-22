/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:11:06 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:45:43 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	if (!*lst)
		return ;
	while (*lst)
	{
		i = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = i;
	}
	*lst = 0;
}
/*
void	del(void *content)
{
	free(content);
}

int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	node1->content = malloc(sizeof(int));
	*(int *)(node1->content) = 1;
	node1->next = NULL;

	t_list *node2 = malloc(sizeof(t_list));
	node2->content = malloc(sizeof(int));
	*(int *)(node2->content) = 2;
	node2->next = NULL;

	t_list *head = node1;
	node1->next = node2;
	ft_lstclear(&head, &del);
	if (head == NULL)
		printf("Lista limpa com sucesso!\n");
	else
		printf("Erro ao limpar a lista!\n");
	return (0);
}*/