/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:23:00 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/16 18:47:41 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	p = malloc(s1len + s2len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, s1len);
	ft_memcpy(p + s1len, s2, s2len);
	p[s1len + s2len] = '\0';
	return (p);
}
/*#include <stdio.h>
int main()
{
	char *result = ft_strjoin("","");
	if (result)
	{
		printf("%s", result);
		free(result); // i free the memory that i have already allocated
	}
	return 0;
}*/
