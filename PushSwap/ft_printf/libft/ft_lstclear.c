/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:34:44 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 18:35:51 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// static t_list *new_node(const char *s)
// {
//     t_list *n = malloc(sizeof *n);
//     if (!n)
//         return NULL;
//     n->content = malloc(ft_strlen(s) + 1);
//     if (!n->content)
//     {
//         free(n);
//         return NULL;
//     }
//     strcpy(n->content, s);
//     n->next = NULL;
//     return n;
// }

// static void print_list(t_list *head)
// {
//     int i = 0;
//     while (head)
//     {
//         printf("node[%d] = '%s'\n", i++, (char *)head->content);
//         head = head->next;
//     }
//     if (i == 0)
//         printf("list empty\n");
// }

// static void del_content(void *p)
// {
//     free(p);
// }
// void ft_lstdelone(t_list *lst, void (*del)(void*))
// {
//     if (!lst)
//         return;
//     if (del)
//         del(lst->content);
//     free(lst);
// }

// int main(void)
// {
//     t_list *head = new_node("uno");
//     if (!head) return 1;
//     head->next = new_node("due");
//     head->next->next = new_node("tre");

//     printf("prima di ft_lstclear:\n");
//     print_list(head);

//     ft_lstclear(&head, del_content);

//     printf("\ndopo ft_lstclear, head = %p\n", (void *)head);
//     print_list(head);

//     return 0;
// }