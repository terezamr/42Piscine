/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:43:59 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/15 14:56:49 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	g;

	i = 0;
	g = 0;
	if (nb != 0)
	{
		while (dest[i])
		{
			i++;
		}
		while (g < nb && src[g])
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
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[11] = "world";
	char b[] = "hello";
	int	i = 0;

	ft_strncat(a, b, 3);
	while (a[i])
	{
		printf("%c", a[i]);
		i++;
	}
	return (0);
}*/
