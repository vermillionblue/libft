/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danisanc <danisanc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:04:23 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/06 16:38:05 by danisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove( void *dst, const void *src, size_t len)
{
	const unsigned char	*p;
	unsigned char		*d;
	unsigned char		temp[5000];
	size_t				i;
	int					k;

	k = 0;
	d = dst;
	p = src;
	i = 0;
	while (i < len)
	{
		temp[i] = p[i];
		i++;
	}
	temp[i] = '\0';
	while (d[k] != '\0' && len > 0)
	{
		d[k] = temp[k];
		k++;
		len--;
	}
	return ((void *)dst);
}

// int main()
// {
// 	char src1[27] = "lorem ipsum dolor sit amet";
// 	char src2[27] = "lorem ipsum dolor sit amet";
// 	char *dest;
// 	char *dst2;
// 	dest = src1 + 1;
// 	dst2 = src2 + 1;
// 	//Use of memmove
// 	memmove(dest, "consectetur", 5);
// 	printf( "Result:%s\n", dest);
// 	//Use of ft_memmove
// 	ft_memmove(dst2, "consectetur", 5);
// 	printf( "Result:%s\n", dst2);
// 	return 0;
// }