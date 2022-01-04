/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:22:15 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/10 14:05:41 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

static char	*ifvalid(const char *haystack, int k, int j)
{
	if (k == j && k != 0)
		return ((char *)(haystack));
	else
		return (NULL);
}

char	*ft_strnstr(const char	*haystack, const char *needle, int len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		if (*haystack == *needle)
		{
			while (haystack[j] == needle[j] && len-- > 0 && needle[j] != '\0')
				j++;
			break ;
		}
		else
		{
			haystack++;
			i++;
			len--;
		}
	}
	return (ifvalid((char *)haystack, ft_strlen((char *)needle), j));
}

// int main(void)
// {
//    char *ret;

//    ret = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
//    printf("%s\n", ret);

//    return(0);
// }