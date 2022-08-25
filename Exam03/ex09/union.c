/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:44:33 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 22:30:28 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	uni(int argc, char **argv)
{
	char	s[256];
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (s[i])
	{
		s[i] = 0;
		i++;
	}
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			s[(int)argv[j][i]] = 1;
			i++;
		}
		j++;
	}
	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if (s[(int)argv[j][i]] == 1)
			{
				write(1, &argv[j][i], 1);
				s[(int)argv[j][i]] = 2;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		uni(argc, argv);
	return (0);
}
