/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:43:57 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 15:50:05 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			ft_putchar(argv[1][i] - 32);
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			ft_putchar(argv[1][i] + 32);
		else
			ft_putchar(argv[1][i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv);
	write(1, "\n", 1);
	return (0);
}
