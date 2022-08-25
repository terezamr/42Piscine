/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:00:21 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/11 21:20:08 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lowerc(int number)
{
	int	g;
	int	b;

	g = 'a';
	while (g <= 'z')
	{
		if (number == g)
		{
			b = 'y';
			return (b);
		}
		else if (number != g)
		{
			b = 'n';
		}
		g++;
	}
	return (b);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	if (str[g] == '\0')
	{
		return (1);
	}
	while (str[g] != '\0')
	{
		if (check_lowerc(str[g]) == 'n')
		{
			return (0);
		}
		g++;
	}
	return (1);
}
/*int	main(void)
{
	char	a[] = "aBfbA";

	ft_str_is_lowercase(a);
	return (0);
}*/
