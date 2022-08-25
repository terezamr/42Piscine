/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:19:26 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/19 16:54:02 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char **argv)
{
	int	g;
	int	i;

	g = 1;
	while (argv[g])
	{
		i = 0;
		while (argv[g][i])
		{
			write(1, &argv[g][i], 1);
			i++;
		}
		write(1, "\n", 1);
		g++;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_print_params(argv);
	}
	return (0);
}
