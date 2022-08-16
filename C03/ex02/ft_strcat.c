/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:43:59 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/15 13:02:42 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	g;
	int	h;

	i = 0;
	g = 0;
	while (dest[i])
	{
		i++;
	}
	h = i;
	while (src[g])
	{
		dest[i] = src[g];
		g++;
		i++;
	}
	while (dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[11] = "hello";
	char b[] = "world";
	int i = 0;

	ft_strcat(a, b);
	//strcat(a, b);
	while (a[i])
	{
		printf("%c", a[i]);
		i++;
	}
	return (0);
}*/