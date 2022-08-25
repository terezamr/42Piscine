/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:00:21 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/11 21:28:40 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_number(int number)
{
	int	g;
	int	b;

	g = '0';
	while (g <= '9')
	{
		if (number == g)
		{
			b = 'y';
			return (b);
			break ;
		}
		else if (number != g)
		{
			b = 'n';
		}
		g++;
	}
	return (b);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	g;
	int	b;

	i = 0;
	g = 0;
	if (str[g] == '\0')
	{
		return (1);
	}
	while (str[g] != '\0')
	{
		b = check_number(str[g]);
		if (b == 'n')
		{
			return (0);
		}
		g++;
	}
	return (1);
}

/*int	main(void)
{
	char	a[] = "524a";

	ft_str_is_numeric(a);
	return (0);
}
*/