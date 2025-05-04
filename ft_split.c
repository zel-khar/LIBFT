/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakel-kh <zakel-kh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:34:00 by zakel-kh          #+#    #+#             */
/*   Updated: 2024/11/16 22:15:39 by zakel-kh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **b, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(b[i]);
		i++;
	}
	free(b);
	return (NULL);
}

static void	ft_strncpy(char *dest, char const *src, int len)
{
	int	i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static char	**ft_put(char **b, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		start = -1;
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			b[j] = malloc((i - start + 1) * sizeof(char));
			if (!b[j])
				return (ft_free(b, j));
			ft_strncpy(b[j], &s[start], (i - start));
			j++;
		}
	}
	b[j] = NULL;
	return (b);
}

static int	ft_counter(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	int		counter;
	char	**b;

	if (!s)
		return (NULL);
	counter = ft_counter(s, c);
	b = malloc((counter + 1) * sizeof(char *));
	if (!b)
		return (NULL);
	return (ft_put(b, s, c));
}
/*
#include <stdio.h>
int main()
{
	char	b[] = "\0";
	int			i = 0;
	char		c = ' ';
	char		**s = ft_split(b, c);
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}
*/