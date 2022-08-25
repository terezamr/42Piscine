/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:25:50 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/10 13:38:31 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	rep;

	rep = size / 2;
	i = 0;
	while (i != rep)
	{
		a = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = a;
		i++;
	}
}
