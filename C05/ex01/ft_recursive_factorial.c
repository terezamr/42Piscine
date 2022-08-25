/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:13:24 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/18 17:54:42 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	count;

	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		count = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_recursive_factorial(-4);
	printf("%i\n", a);
	return (0);
}*/
