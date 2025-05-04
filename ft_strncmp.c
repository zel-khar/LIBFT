/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:03:04 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/07 04:00:55 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n)
	{
		if (s1[x] == '\0' || s2[x] == '\0')
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		if ((unsigned char)s1[x] != (unsigned char)s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	return (0);
}
/*
int main()
{
	char x[] = "yaha";
	char y[] = "yahiya";
	int z = 5;

	printf("%d\n", strncmp(x, y, z));
	printf("%d\n", ft_strncmp(x, y, z));

}*/
