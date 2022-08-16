/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:32:29 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/16 17:02:33 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

	i = 1;
	if (nb == -2147483648)
	{
		ft_putchar(45);
		ft_putchar(2 + '0');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar(45);
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
	}
	ft_putnbr(nb % 10);
}

int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
