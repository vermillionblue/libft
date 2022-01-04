/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:33:51 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/14 11:30:33 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(int count, int size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count);
	return ((void *)(p));
}

// int main(void)
// {
//     int *p1 = ft_calloc(4, sizeof(int));    

//     int *p2 = ft_calloc(1, sizeof(int[4])); 

//     int *p3 = ft_calloc(4, sizeof *p3);     

//     if(p2) {
//         for(int n=0; n<4; ++n) // print the array
//             printf("p2[%d] == %d\n", n, p2[n]);
//     }
//     free(p1);
//     free(p2);
//     free(p3);
// }
//allocate and zero out an array of 4 int
//same, naming the array type directly
//same, without repeating the type name