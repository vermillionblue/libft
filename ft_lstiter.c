/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:53:56 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/05 15:26:53 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

//void	add(void	*content)
//{
//	t_list	*lst;
//
//	lst = content;
//	lst->content = (uintptr_t *)7;
//}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		(*f)(lst);
		lst = lst->next;
	}
}

//void printList(t_list* head)
//{
//    while( head != NULL)
//    {   
//        printf("%ld\n", (uintptr_t)head->content);
//        head = head->next;
//    }
//}
//int main(void)
//{
//    t_list *head;
//    t_list *second;
//    t_list *tail;
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
//    tail ->content = (int*) 3;  
//    tail->next = NULL;
// 
//    printList(head);
//    printf("\n");
//
//    ft_lstiter(head, add);
//    
//    printList(head);
//    printf("\n");
//  
//    return 0;
//}