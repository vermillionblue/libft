/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:58:25 by danisanc          #+#    #+#             */
/*   Updated: 2022/01/13 12:45:55 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (!lst->next)
		lst = lst->next;
	return (lst);
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