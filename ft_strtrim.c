/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessa <alessa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 00:18:52 by danisanc          #+#    #+#             */
/*   Updated: 2021/12/14 11:41:17 by alessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	charinset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

static int	count_endstr(char const *s1, char const *set)
{
	int		len;

	len = ft_strlen((char *)s1);
	while (len > 0 && s1[len - 1])
	{
		if (charinset(set, s1[len - 1]))
			len--;
		else
			break ;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		b;
	int		k;
	int		len;

	k = 0;
	b = 0;
	len = count_endstr(s1, set);
	while (s1[k])
	{
		if (charinset(set, s1[k]))
			k++;
		else
			break ;
	}
	p = malloc(len + 1);
	while (s1[k] && k < len)
	{
		p[b] = s1[k];
		k++;
		b++;
	}
	p[b] = '\0';
	return (p);
}

// int main(void)
// {
//    char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";

//    char *p = ft_strtrim(s1, " ");
//    printf("%s\n", p);
//    free(p);
// }