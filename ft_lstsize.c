/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:08:03 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/05 15:23:30 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		b;
	t_list	*current;

	b = 0;
	current = lst;
	while (current != NULL)
	{
		b++;
		current = current->next;
	}
	return (b);
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
//    t_list *head;
//    t_list *second;
//    t_list *third;
//    
//    head = (t_list*)malloc(sizeof(t_list));
//    second = (t_list*)malloc(sizeof(t_list));
//    third = (t_list*)malloc(sizeof(t_list));
//
//    head->content = (int*) 1;
//    head-> next = second;
//
//    second->content = (int*) 2;
//    second->next = third;
//
//
//    third ->content = (int*) 3;  
//    third->next = NULL;
//    
// 
//
//    printList(head);
//    printf("size: %d\n", ft_lstsize(head));
//
//    return 0;
//}