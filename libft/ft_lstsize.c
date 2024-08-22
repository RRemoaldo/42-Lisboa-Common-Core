/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:10:56 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:46:59 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
/*
int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = (void *)2;
	node1->next = NULL;
	node2->content = (void *)20;
	node2->next = node3;
	node3->content = (void *)30;
	node3->next = NULL;

	int size = ft_lstsize(node1);
	printf("Tamanho da lista: %d\n", 2);

	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/