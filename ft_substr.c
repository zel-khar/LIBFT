/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:54:27 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/01 16:13:09 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	if (start + len > i)
	{
		len = i - start;
	}
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*#include <stdio.h>
int main()
{
	char *p = ft_substr("lhmoda moda", 3, 5);
	printf("%s\n", p);
	return 0;
}*/
