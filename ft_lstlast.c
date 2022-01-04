/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:58:25 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/06 02:01:17 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

//void printList(t_list* head)
//{
//    while( head != NULL)
//    {   
//        printf("%ld\n", (uintptr_t)head->content);
//        head = head->next;
//    }
//}
//
//int main(void)
//{
//
//    t_list *head;
//    t_list *second;
//    t_list *tail;
//  
//
//    
//    head = (t_list*)malloc(sizeof(t_list));
//    second = (t_list*)malloc(sizeof(t_list));
//    tail = (t_list*)malloc(sizeof(t_list));
//
//    head->content = (int*) 1;
//    head-> next = second;
//
//    second->content = (int*) 2;
//    second->next = tail;
//
//
//    tail ->content = (int*) 3;  
//    tail->next = NULL;
//    
//
//    printList(ft_lstlast(head));
//
//
//    return 0;
//}