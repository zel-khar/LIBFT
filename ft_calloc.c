/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:02:32 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/09 15:35:11 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = nmemb * size;
	j = 0;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (j < i)
	{
		((unsigned char *)p)[j] = 0;
		j++;
	}
	return (p);
}
