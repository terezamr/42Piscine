/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:08:48 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/19 14:03:25 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char **argv)
{
	int	g;
	int	i;

	g = 1;
	i = 0;
	while (argv[g])
		g++;
	g--;
	while (g != 0)
	{
		i = 0;
		while (argv[g][i])
		{
			write(1, &argv[g][i], 1);
			i++;
		}
		write(1, "\n", 1);
		g--;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_rev_params(argv);
	}
	return (0);
}
