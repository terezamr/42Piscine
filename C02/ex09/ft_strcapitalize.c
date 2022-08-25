/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:39:01 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/15 14:39:55 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_type(int number, int min, int max)
{
	int	g;
	int	b;

	g = min;
	while (g <= max)
	{
		if (number == g)
		{
			return (1);
		}
		else if (number != g)
		{
			return (0);
		}
		g++;
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = 0;
	while (str[i])
	{
		a = check_type(str[i - 1], 'a', 'z');
		b = check_type(str[i - 1], '0', '9');
		c = check_type(str[i - 1], 'A', 'Z');
		if (check_type(str[i], 'A', 'Z') == 'y')
		{
			str[i] = str[i] + 32;
		}
		if (!a && !b && !c && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}

int main()
{
    char a[] = "bb+As & aT/c";

	ft_strcapitalize(a);
  	return (0);
}
