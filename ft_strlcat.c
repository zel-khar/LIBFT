/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:16:23 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/06 21:52:26 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[j] && j < size)
		j++;
	l = j;
	if (size <= l)
		return (size + ft_strlen(src));
	while (src[i] && l + i + 1 < size)
	{
		dst[l + i] = src[i];
		i++;
	}
	dst[l + i] = '\0';
	return (l + ft_strlen(src));
}
/*int main()
{
	char dst[] = "hello ";
	char src[20] = "cava";
	printf("%zu",ft_strlcat(dst,src,4));
	return 0;
}*/
