/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:34:27 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/24 18:13:05 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	aux;

	aux = 2;
	if (nb < 2)
		return (0);
	while (aux <= (nb / 2))
	{
		if (nb % aux == 0)
			return (0);
		aux++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_find_next_prime(2147482642);
	printf("%i", a);
}*/
