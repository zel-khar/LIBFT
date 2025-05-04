/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:24:11 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/06 21:29:14 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*str;

	str = (char *)s;
	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/*int main()
{
	char x[] = "la7afde @taha ijhc pn";
	char *s = ft_strchr(x, '\0');
	if (s)
		printf("%s\n", s);
	else
		printf("NULL");
	return 0;
}*/
