/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:07:11 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/05 15:17:40 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	head->content = content;
	head->next = NULL;
	return (head);
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
//    uintptr_t content = 42;
//
//    printList(ft_lstnew((uintptr_t*)content));
//}