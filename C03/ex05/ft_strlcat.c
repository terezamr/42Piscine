/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:43:59 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/16 19:49:28 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count(char *list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	g;
	unsigned int	j;

	i = count(dest);
	g = count(src);
	if (size == 0 || size <= i)
	{
		return (size + i);
	}
	j = i;
	g = 0;
	while (src[g] && g < size - j - 1)
	{
		dest[i] = src[g];
		g++;
		i++;
	}
	dest[i] = '\0';
	return (i + g);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[9] = "hello";
	char b[] = "world";
	unsigned int	i;

	i = ft_strlcat(a, b, 3);
	printf("%i", i);
	return (0);
}*/