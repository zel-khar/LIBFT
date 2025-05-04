/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:11:33 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/10 00:18:57 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;

	ss = s;
	i = 0;
	while (i < n)
	{
		ss[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main()
{
	unsigned char buffer[70]= " HEllo Hello  my name is zrire9 !";
	int s = 10;
	int value = 300;
	int x = 0;
	while (x < s)
	{
		buffer[x] = ' ';
		x++;
	}
	ft_memset(buffer, value, s);
	x = 0;
	while (x < s)
	{
		ft_putchar(buffer[x]);
		x++;
	}
	return 0;

}*/
