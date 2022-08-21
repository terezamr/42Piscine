/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:37:02 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/20 12:10:24 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sp;
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (i < size)
	{
		count = count + str_len(strs[i]);
		i++;
	}
	sp = malloc(sizeof(char) * (count + str_len(sep) * (size - 1)));
	if (!sp)
	{
		return (0);
	}
	if (size == 0)
	{
		return (sp);
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(sp, strs[i]);
		if (i != size - 1)
		{
			ft_strcat(sp, sep);
		}
		i++;
	}
	return (sp);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*a[] = {"hello", "world"};
	char *b = "\\";
	char *c;

	c = ft_strjoin(2, a, b);
	printf("%s", c);
}*/
