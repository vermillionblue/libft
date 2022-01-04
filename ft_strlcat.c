/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:14:46 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/06 12:15:35 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

#include "libft.h"

size_t	ft_strlcat( char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	j;

	j = 0;
	k = 0;
	i = 0;
	i = ft_strlen((char *)src);
	j = ft_strlen(dst);
	if (dstsize == 0)
		return (i);
	if (dstsize < j + 1)
		return (i + dstsize);
	while (src[k] != '\0' && (dstsize - j - 1) > 0)
	{
		dst[j + k] = src[k];
		k++;
		dstsize--;
	}
	dst[j + k] = '\0';
	return (i + j);
}

// int main(void)
// {
//    //char src[] = "Dani";
//    //char dest[10] = "Hello";

// 			char *dest = (char *)malloc(sizeof(*dest) * 15);
// 			memset(dest, 0, 15);
// 			memset(dest, 'r', 6);
// 					dest[0] = '\0';
// 		dest[11] = 'a';
// 			printf("%c\n", dest[10]);
//    printf("%lu\n", ft_strlcat(dest, "lorem ipsum", 15));
//    printf("%c\n", dest[10]);
//    return (0);
// }
