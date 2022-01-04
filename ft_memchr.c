/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:18:45 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/06 15:47:01 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t						i;
	const char					*p;

	p = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int main () {
//   int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//   printf("%s", (char *)ft_memchr(tab, -1, 7));
//   return(0);
// }