/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:32:36 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/16 19:55:32 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_in(char *base, int count)
{
	int	i;
	int	g;

	i = 0;
	if (count <= 1)
	{
		return (0);
	}
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		g = 0;
		while (g < count)
		{
			if (base[i] == base[g] && i != g)
			{
				return (0);
			}
			g++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		count++;
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar(45);
	}
	if (check_in(base, count))
	{
		if (nbr <= count)
		{
			ft_putchar(base[nbr]);
		}
		else
		{
			ft_putnbr_base(nbr / count, base);
			ft_putnbr_base(nbr % count, base);
		}
	}
}

int	main(void)
{
	ft_putnbr_base(-29, "abcdefghi");
	return (0);
}
