/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:13:24 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/18 18:01:28 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;

	count = 1;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		count = count * nb;
		power--;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_iterative_power(3, 2);
	printf("%i\n", a);
	return (0);
}*/
