/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:08:18 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/11 15:01:27 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	int		k;
	char	*p;

	k = 0;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (len > 0)
	{
		p[k] = s[k + start];
		k++;
		len--;
	}
	p[k] = '\0';
	return (p);
}

// int main(void)
// {
//    char	str[] = "lorem ipsum dolor sit amet";
// 			char	*strsub;
//    strsub = ft_substr(str, 0, 0);
//    printf("%s\n", strsub);
// 			free(strsub);
// }