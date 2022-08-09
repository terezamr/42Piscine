/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:26:55 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/08 20:35:43 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_b(int a)
{
	int	b;

	b = a + 1;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	doloop(int n, int a)
{
	while (n >= 0)
	{	
		while (a < 57)
		{
			doloop(n - 1, a + 1);
			write_b(a);
			write(1, " ", 1);
			a++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;

	a = 48;
	b = 48;
	doloop(n, a);
}
