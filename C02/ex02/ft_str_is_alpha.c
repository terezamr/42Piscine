/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:00:21 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/11 21:29:37 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_type(int letter, int min, int max)
{
	int	g;
	int	b;

	g = min;
	while (g <= max)
	{
		if (letter == g)
		{
			b = 'y';
			return (b);
		}
		else if (letter != g)
		{
			b = 'n';
		}
		g++;
	}
	return (b);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	d;
	int	g;

	g = 0;
	if (str[g] == '\0')
	{
		return (1);
	}
	while (str[g] != '\0')
	{
		i = check_type(str[g], 'a', 'z');
		d = check_type(str[g], 'A', 'Z');
		if (i == 'n' && d == 'n')
		{
			return (0);
		}
		g++;
	}
	return (1);
}

/*int	main(void)
{
	char	a[] = "aA";
	int d;

	d = ft_str_is_alpha(a);
	return (0);
}*/
