/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:13:24 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/18 18:03:45 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	count;

	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		count = nb * ft_recursive_power(nb, power - 1);
		power--;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_recursive_power(3, 2);
	printf("%i\n", a);
	return (0);
}*/
