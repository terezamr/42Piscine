/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:02:17 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/18 18:38:42 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	aux;
	int	count;

	aux = 0;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (aux <= 46340)
	{
		aux++;
		count = aux * aux;
		if (count == nb)
		{
			return (aux--);
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = ft_sqrt(2147395600);
	printf("%i", a);
}*/
