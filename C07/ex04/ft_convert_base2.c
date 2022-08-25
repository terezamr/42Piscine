/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:25:37 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/24 00:15:14 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_m(int tot)
{
	int	mult;
	int	tot2;

	tot2 = tot - 1;
	mult = 1;
	while (tot2 > 0)
	{
		mult = mult * 10;
		tot2--;
	}
	return (mult);
}

int	getindex(char dig, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (dig == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	to_dec(char *str, char *base, int i, int count)
{
	int		soma;
	char	a;

	soma = 0;
	while (str[i])
	{
		a = getindex(str[i], base);
		if (a == -1)
			break ;
		soma = (soma * count) + a;
		i++;
	}
	return (soma);
}

int	str_num(char *str, int start, int end)
{
	int	i;
	int	count;
	int	soma;
	int	number;

	soma = 0;
	i = 0;
	count = end - start;
	while (count != 0)
	{
		number = str[start] - 48;
		number = number * count_m(count);
		soma = soma + number;
		count--;
		start++;
	}
	return (soma);
}

int	check_in(char *base)
{
	int	i;
	int	g;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32
			|| base[i] == 43 || base[i] == 45)
			return (0);
		g = i + 1;
		while (base[g] != '\0')
		{
			if (base[i] == base[g])
				return (0);
			g++;
		}
		i++;
	}
	return (i);
}
