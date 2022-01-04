/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:46:36 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/05 15:22:17 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
}

// void printList(t_list* head)
// {
// 	while( head != NULL)
// 	{   
// 		printf("%ld\n", (uintptr_t)head->content);
// 		head = head->next;
// 	}
// }
// int main(void)
// {
//     t_list *new;
//     t_list *head;
//     t_list *second;
//     t_list *tail;
//     t_list **p;

//     new = (t_list*)malloc(sizeof(t_list));
//     head = (t_list*)malloc(sizeof(t_list));
//     second = (t_list*)malloc(sizeof(t_list));
//     tail = (t_list*)malloc(sizeof(t_list));

//     head->content = (int*) 1;
//     head-> next = second;

//     second->content = (int*) 2;
//     second->next = tail;
//     tail ->content = (int*) 3;  
//     tail->next = NULL;
//     p = &head;
//     new->content = (int*)11;
//     ft_lstadd_back(p, new);
//     printList(head);

//     return 0;
// }