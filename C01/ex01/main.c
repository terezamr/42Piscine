/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:32:01 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/08 23:17:44 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	b;
	int c;
	int *a_point;
	int **b_point;
	int ***c_point;
	int ****d_point;
	int *****e_point;
	int ******f_point;
	int *******g_point;
	int ********h_point;
	int *********i_point;

	a_point = &b;
	b_point = &a_point;
	c_point = &b_point;
	d_point = &c_point;
	e_point = &d_point;
	f_point = &e_point;
	g_point = &f_point;
	h_point = &g_point;
	i_point = &h_point;
	ft_ultimate_ft(i_point);
	write(1, &b, 1);
}
