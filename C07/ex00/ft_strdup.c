/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:45:36 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/22 19:18:02 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*g;

	i = 0;
	while (src[i] != '\0')
		i++;
	g = (char *)malloc(sizeof(char) * (i + 1));
	if (!g)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		g[i] = src[i];
		i++;
	}
	g[i] = '\0';
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
