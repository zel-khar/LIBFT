/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:44:11 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/01 15:57:26 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;
	size_t			i;

	i = 0;
	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *) &ss[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int main() {
    const char *str = "";
    char *result = (char *)ft_memchr(str,0 , 13);
    const char *str2 = "";
    char *rest = (char *)memchr(str2, 0, 13);

    if (result || rest)
    {
	    printf("character: %c\n", *result);
	    printf("character: %c\n", *rest);
   } 
    else 
    {
	   printf("%s",(char *)memchr(str2, 112, 13));
	   printf("%s",(char *)ft_memchr(str, 112, 13));

    }

    return 0;
}*/
