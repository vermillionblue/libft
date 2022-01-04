/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:16:55 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/14 11:24:47 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		k;
	char	*p;

	k = 0;
	len = ft_strlen((char *)s1);
	p = (char *)malloc(len * sizeof(char *) + 1);
	if (p == NULL)
		return (NULL);
	while (k < len)
	{
		p[k] = s1[k];
		k++;
	}
	p[len] = '\0';
	return (p);
}

//int main(void)
//{
//    const char *s1 = "A brave new world.";
//    char *s2 = ft_strdup(s1);
//    printf("%s", s2);
//    free(s2);
//}