/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:30:20 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/10 13:23:56 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	int			k;
	char		*p;

	p = (char *)s;
	k = 0;
	i = ft_strlen((char *)s) + 1;
	while (i > 0)
	{
		if (s[k] == c)
			return ((p + k));
		i--;
		k++;
	}
	return (NULL);
}

// int main () {
//   char		str2[] = "bonjour";
//   char *str;
// 		char *str3;

//   str = strchr(str2, 'b');
// 		str3 = ft_strchr(str2, 'b');
//   printf("%s:\n", str);
// 		printf("%s:\n", str3);
//   return(0);
// }