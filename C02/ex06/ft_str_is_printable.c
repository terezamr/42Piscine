/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:00:21 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/11 21:23:17 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_print(int number)
{
	int	g;
	int	b;

	g = 32;
	while (g <= 127)
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

int	ft_str_is_printable(char *str)
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
		if (check_print(str[g]) == 'n')
		{
			return (0);
		}
		g++;
	}
	return (1);
}

/*int	main(void)
{
	char	a[] = "AAv9A";

	ft_str_is_printable(a);
	return (0);
}*/
