/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:53:03 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/05 15:24:55 by danisanc         ###   ########.fr       */
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

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	free(lst);
	del(lst->content);
}

//void printList(t_list* head)
//{   
//    t_list* temp = head;
//
//    while(temp != NULL)
//    {   
//        printf("%ld\n", (uintptr_t)temp->content);
//        temp = temp->next;
//    }
//    
//}
//
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
//
//    tail ->content = (int*) 3;  
//    tail->next = NULL;
//
//
//    printList(head);
//    printf("\n");
//
//    ft_lstdelone(second, del);
//    
//    printList(head);
//    printf("\n");
//  
//
//
//    return 0;
//}