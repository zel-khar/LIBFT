/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:55:58 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/06 14:03:28 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	x;
	size_t	sign;
	size_t	resulte;

	x = 0;
	sign = 1;
	resulte = 0;
	while ((nptr[x] >= 9 && nptr[x] <= 13) || nptr[x] == 32)
		x++;
	if (nptr[x] == '+' || nptr[x] == '-')
	{
		if (nptr[x] == '-')
		{
			sign = sign * -1;
		}
		x++;
	}
	while ((nptr[x] >= 48 && nptr[x] <= 57) && nptr[x])
	{
		resulte = resulte * 10 + (nptr[x] - 48);
		x++;
	}
	return (resulte * sign);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	s[] = "   		 	+685466541654165464651";

	printf("%d\n", ft_atoi(s));
	printf("%d", atoi(s));
}*/
