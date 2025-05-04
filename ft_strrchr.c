/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:39:49 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/07 04:00:32 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&s[i + 1]);
	return (NULL);
}
/*
int main() {
  char *a = "happy days";
  printf("%s",ft_strchr(a, 97));
  return 0;
}*/
