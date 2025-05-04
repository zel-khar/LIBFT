/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:08:33 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/10 00:02:58 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		n = -n;
		ft_putchar_fd('-', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}
/*
int main()
{
	int a = -2147483648;
	int b = -2147483647;
	int c = 2147483647;
	int d = 2147483648;
	int e = 0;
	int h = -12345678;
	ft_putnbr_fd(a, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(b, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(c, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(d, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(e, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(h, 1);
	ft_putchar_fd('\n', 1);

	return 0;
}*/
