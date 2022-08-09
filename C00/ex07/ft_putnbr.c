/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:32:29 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/08 20:50:26 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	negative_n(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		nb = nb * -1;
		ft_putchar(45);
	}
	return (nb);
}

int	count_t(int nb2)
{
	int	tot;

	tot = 1;
	while (nb2 > 10)
	{
		nb2 = nb2 / 10;
		tot++;
	}
	return (tot);
}

int	count_m(int tot)
{
	int	mult;
	int	tot2;

	tot2 = tot - 1;
	mult = 1;
	while (tot2 > 0)
	{
		mult = mult * 10;
		tot2--;
	}
	return (mult);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	tot;
	int	mult;
	int	nb2;

	i = 1;
	nb = negative_n(nb);
	if (nb == -2147483648)
	{
		ft_putchar(45);
		ft_putchar(2 + '0');
		nb = 147483648;
	}
	nb2 = nb;
	tot = count_t(nb2);
	while (tot > 0)
	{
		mult = count_m(tot);
		nb2 = nb / mult;
		ft_putchar(nb2 + '0');
		nb = nb - (nb2 * mult);
		tot--;
	}
}
