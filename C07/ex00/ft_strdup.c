/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:45:36 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/20 12:14:52 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*g;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	g = malloc(sizeof(char) * i + 1);
	if (!g)
	{
		return (0);
	}
	ft_strcpy(g, src);
	return (g);
}
/*
int	main(void)
{
	char	c[] = "hello";
	char *d;

	d = ft_strdup(c);
	free(d);
}*/
