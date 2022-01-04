/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:03:56 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/06 02:06:22 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

//void del(void* bye)
//{
//    free(bye);
//}
//
//void *add(void * content)
//{
//    t_list* lst = content;
//    lst->content = (uintptr_t*) 7;
//    
//}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*head;
	t_list	*p;
	void	*buff;

	buff = 0;
	del(buff);
	head = (t_list *)malloc(sizeof(t_list));
	head->content = lst->content;
	(*f)(head);
	p = head;
	while (lst != NULL)
	{
		p->next = (t_list *)malloc(sizeof(t_list));
		p = p->next;
		p->content = lst->content;
		(*f)(p);
		lst = lst->next;
		if (lst->next == NULL)
		{
			free(p->next);
			p->next = NULL;
			return (head);
		}
	}
	return (NULL);
}

//void printList(t_list* head)
//{
//    
//    while( head != NULL)
//    {   
//        printf("%ld\n", (uintptr_t)head->content);
//        head = head->next;
//    }
//    printf("[NULL]");
//    printf("\n");
//
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
//    t_list* sechead;
//    sechead = ft_lstmap(head, add, del);
// 
// 
//    printList(head);
//    printf("\n");
//    printList(sechead);
//    return 0;
//}