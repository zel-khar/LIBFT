/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:36:47 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/06 23:04:02 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)hystack);
	}
	if (*needle == '\0' || len == 0)
		return (NULL);
	while (hystack[i] != '\0' && i < len)
	{
		j = 0;
		while (hystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j] == '\0')
				return ((char *)(hystack + i));
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(hystack + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char x[] = "baby you so perfect baby yeah you worth it";
	char y[] = "so";
	size_t z = 0;
	printf("%s",ft_strnstr(x,y,z));
	return 0;
}*/
