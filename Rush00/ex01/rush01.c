/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:55:23 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/07 16:59:45 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c);

void	line(int x, int e, int f, int g)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(e);
		}
		else if (i == x)
		{
			ft_putchar(f);
		}
		else
		{
			ft_putchar(g);
		}
		i++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	i;
	int	d;

	i = 1;
	d = 1;
	if (x > 0)
	{
		while (d <= y)
		{
			if (d == 1)
			{
				line(x, 47, 92, 42);
			}
			else if (d == y)
			{
				line(x, 92, 47, 42);
			}
			else if (d != 1 && d != y)
			{
				line(x, 42, 42, 32);
			}
		d++;
		}	
	}
}
