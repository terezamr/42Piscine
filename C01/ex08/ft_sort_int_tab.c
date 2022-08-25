/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:25:50 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/10 13:35:01 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	rep;
	int	a;

	rep = 0;
	while (rep < size - 1)
	{
		i = 0;
		while (i != size - 1)
		{
			a = tab[i];
			if (tab[i] > tab[i + 1])
			{
			tab[i] = tab[i + 1];
			tab[i + 1] = a;
			}
		i++;
		}
	rep++;
	}
}
