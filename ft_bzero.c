/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:11:27 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/09 14:54:51 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ss;
	size_t	i;

	ss = s;
	i = 0;
	while (i < n)
	{
		ss[i] = 0;
		i++;
	}
}
/*
int main()
{
  int a[] = {1,3,5,6,7,8,8};
  ft_bzero(a, 5);
  int i = 0;
  while (i < 5)
  {printf("%d\n",a[i++]);}
  return 0;
}
*/