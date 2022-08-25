/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:32:38 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 21:58:24 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fizzbuzz(int i)
{
	if (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
			write(1, "\n", 1);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else
		{
			if (i < 10)
				ft_putchar(i + '0');
			if (i >= 10)
			{
				ft_putchar(i / 10 + 48);
				ft_putchar(i % 10 + 48);
			}
			write(1, "\n", 1);
		}
		fizzbuzz(i + 1);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	fizzbuzz(i);
}
