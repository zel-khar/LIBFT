/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:21:28 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/09 15:06:58 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		sign;
	int		i;
	char	str[12];

	i = 10;
	sign = 0;
	str[11] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	if (n == 0)
		str[i--] = '0';
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		str[i--] = '-';
	return (ft_strdup(str + i + 1));
}
/*#include <stdio.h>
int main()
{
	int str = -2147483648;
	int st = -2147483647;
	int s = 2147483647;
	int ik = 0;
	printf("%s\n",ft_itoa(str));
	printf("%s\n",ft_itoa(st));
	printf("%s\n",ft_itoa(s));
	printf("%s\n",ft_itoa(ik));
	return 0;
}*/
