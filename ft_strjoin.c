/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:19:33 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/11 15:11:32 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*p;
	int		j;

	j = 0;
	i = ft_strlen((char *)s1);
	k = ft_strlen((char *)s2);
	p = malloc(k + i + 1);
	if (p == NULL)
		return (NULL);
	while (j < i)
	{
		p[j] = s1[j];
		j++;
	}
	j = 0;
	while (j < k)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + k] = '\0';
	return (p);
}

// int main(void)
// {
// 		char	s1[] = "lorem ipsum";
// 		s1[0] = '\0';
// 		char	s2[] = "dolor sit amet";
// 		char *p = ft_strjoin(s1, s2);
// 		printf("%s\n", p);

// }