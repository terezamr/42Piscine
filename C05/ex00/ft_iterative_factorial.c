/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:49:44 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/18 17:52:40 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		count = 1;
	}
	while (nb > 0)
	{
		count = count * nb;
		nb--;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_iterative_factorial(4);
	printf("%i", a);
	return (0);
}*/
