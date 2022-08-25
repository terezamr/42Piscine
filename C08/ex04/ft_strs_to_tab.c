/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:56:09 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/23 20:58:07 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	str_len(char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*g;
	char	*d;

	i = 0;
	while (src[i] != '\0')
		i++;
	g = (char *)malloc(sizeof(char) * (i + 1));
	d = g;
	if (!d)
		return (0);
	i = 0;
	while (src[i])
	{
		g[i] = src[i];
		i++;
	}
	g[i] = '\0';
	return (g);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*block;
	struct s_stock_str	*d;

	i = 0;
	block = malloc(sizeof(struct s_stock_str) * (ac + 1));
	d = block;
	if (!d)
	{
		return (0);
	}
	while (i < ac)
	{
		block[i].size = str_len(av[i]);
		block[i].str = av[i];
		block[i].copy = ft_strdup(av[i]);
		i++;
	}
	block[i].str = 0;
	block[i].copy = 0;
	return (block);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}*/