/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:06:29 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 15:31:27 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	aff_last_param(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[argc - 1][i])
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		aff_last_param(argc, argv);
	}
	write(1, "\n", 1);
	return (0);
}
