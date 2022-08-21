/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:01:28 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/20 11:00:06 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	i;
	int	*sp;

	if (min >= max)
	{
		return (0);
	}
	count = max - min;
	i = 0;
	sp = malloc(sizeof(int) * count);
	if (!sp)
	{
		return (0);
	}
	while (i < count)
	{
		sp[i] = min;
		i++;
		min++;
	}
	return (sp);
}
/*
int	main(void)
{
	ft_range(1, 9);
}*/
