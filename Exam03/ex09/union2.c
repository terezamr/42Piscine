/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:44:33 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 22:49:16 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	s[127];
	int		i;
	int		j;
	char	a;

	i = 0;
	j = 1;
	if (argc == 3)
	{
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
		i = 0;
		while (i < 127)
		{
			if (s[i] == 1)
			{
				printf("i %i\n", i);
				ft_putchar(i);
			}
			i++;
		}
	}
}
