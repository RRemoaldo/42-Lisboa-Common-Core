/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:05:29 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:46:04 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}
/*void	dele(void *data)
{
	free(data);
}
int main()
{
	int	*data = malloc(sizeof(int));
	*data = 42;

	t_list *node = malloc(sizeof(t_list));
	node->content = data;
	node->next = NULL;

	ft_lstdelone(node, dele);

	if (node == NULL)
		printf("Node deletado com sucesso!\n");
	else
		printf("Falha ao deletar o node.\n");
	return (0);
}*/