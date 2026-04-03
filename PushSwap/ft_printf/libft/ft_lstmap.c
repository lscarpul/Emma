/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:43:19 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 23:28:33 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lista;
	t_list	*nodo;

	if (!lst || !f || !del)
		return (NULL);
	lista = NULL;
	nodo = NULL;
	while (lst)
	{
		nodo = ft_lstnew(f(lst->content));
		if (!nodo)
		{
			ft_lstclear(&lista, del);
			return (NULL);
		}
		ft_lstadd_back(&lista, nodo);
		lst = lst->next;
	}
	return (lista);
}
