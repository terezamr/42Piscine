/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:40:28 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/20 12:10:32 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	i;
	int	*sp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	count = max - min;
	i = 0;
	sp = malloc(sizeof(int) * count);
	if (!sp)
	{
		return (-1);
	}
	while (i < count)
	{
		sp[i] = min;
		i++;
		min++;
	}
	return (count);
}
/*
int	main(void)
{
	int	*tab;

	ft_ultimate_range(&tab, 1, 9);
}*/
