/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:32:36 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/24 20:29:49 by mvicente         ###   ########.fr       */
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
	if (count == 1 || base[0] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == 43 || base[i] == 45 || base[i] <= 32 || base[i] == 127)
			return (0);
		g = i + 1;
		while (g < count)
		{
			if (base[i] == base[g])
				return (0);
			g++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				count;
	unsigned char	*base_unsigned;
	long int		number;

	number = (long int) nbr;
	base_unsigned = (unsigned char *)base;
	count = ft_strlen(base);
	if (check_in(base, count))
	{
		if (number < 0)
		{
			number = number * -1;
			ft_putchar(45);
		}
		if (number < count)
			ft_putchar(base_unsigned[number]);
		if (number >= count)
		{
			ft_putnbr_base(number / count, base);
			ft_putnbr_base(number % count, base);
		}
	}
}

#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(-8, "01");
	return (0);
}