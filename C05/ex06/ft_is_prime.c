/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:20:47 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/18 18:40:17 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	aux;

	aux = 2;
	if (nb <= 0 || nb == 1)
	{
		return (0);
	}
	while (aux < nb)
	{
		if (nb % aux == 0)
		{
			return (0);
		}
		aux++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_is_prime(2147483647);
	printf("%i", a);
}*/
