/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:49:53 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/05 15:22:56 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
//     t_list *new;
//     t_list *head;
//     t_list *second;
//     t_list *third;
//     t_list **p;
//     new = (t_list*)malloc(sizeof(t_list));
//     head = (t_list*)malloc(sizeof(t_list));
//     second = (t_list*)malloc(sizeof(t_list));
//     third = (t_list*)malloc(sizeof(t_list));

//     head->content = (int*) 1;
//     head-> next = second;

//     second->content = (int*) 2;
//     second->next = third;

//     third ->content = (int*) 3;  
//     third->next = NULL;
//     p = &head;
//     new->content = (int*)11;

//     ft_lstadd_front(p, new);
//     printList(new);

//     return 0;
// }