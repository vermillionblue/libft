/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:50:27 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/14 11:49:20 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

//void	del(void	*bye)
//{
//	free(bye);
//}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	current = *lst;
	while (current->next != NULL)
	{
		free (current);
		del (current->content);
		current = current->next;
	}
	*lst = NULL;
}

// void printList(t_list* head)
// {
//     while( head != NULL)
//     {   
//         printf("%ld\n", (uintptr_t)head->content);
//         head = head->next;
//     }
// }
// int main(void)
// {
//     t_list *head;
//     t_list *second;
//     t_list *tail;
//     t_list **p;
//     head = (t_list*)malloc(sizeof(t_list));
//     second = (t_list*)malloc(sizeof(t_list));
//     tail = (t_list*)malloc(sizeof(t_list));
//
//     head->content = (int*) 1;
//     head-> next = second;
//
//     second->content = (int*) 2;
//     second->next = tail;
//
//     tail ->content = (int*) 3;  
//     tail->next = NULL;
//     p = &head;
//     printList(head);
//     printf("\n");
//
//     ft_lstclear(p, del);
//     printList(head);
//     printf("\n");
//     return 0;
// }