/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:15:01 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/16 18:44:16 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		y;
	int		x;
	char	*p;
	int		z;

	if (!s1)
		return (NULL);
	x = 0;
	y = ft_strlen(s1);
	while (s1[x] && ft_strchr(set, s1[x]))
		x++;
	while (y > x && ft_strchr(set, s1[y - 1]))
		y--;
	p = malloc((y - x) + 1);
	if (!p)
		return (NULL);
	z = y - x;
	ft_memcpy(p, s1 + x, z);
	p[z] = '\0';
	return (p);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "                       ";
	char b[] = "  ";
	printf("%s",ft_strtrim(a, b));
	return 0;
}*/
