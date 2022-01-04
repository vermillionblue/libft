/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:17:59 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/06 12:15:38 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strlcpy(char	*dst, const char	*src, int dstsize)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	i = ft_strlen((char *)src);
	if (dstsize == 0)
		return (i);
	while (src[k] != '\0' && dstsize > 1)
	{
		dst[k] = src[k];
		k++;
		dstsize--;
	}
	dst[k] = '\0';
	return (i);
}

// int main(void)
// {
// 		char *dest;
//    dest = (char *)malloc(sizeof(*dest) * 15);
// 				memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
//    printf("%u\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
//    printf("%s", dest);
//    return (0);
// }