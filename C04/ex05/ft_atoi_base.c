/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:59:34 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/18 16:09:29 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_in(char *base, int count)
{
	int	i;
	int	g;

	i = 0;
	if (count <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45 || base[i] <= 32 || base[i] == 127)
			return (0);
		g = i + 1;
		while (g < count)
		{
			if (base[i] == base[g])
				return (0);
			g++;
		}
		i++;
	}
	return (1);
}

int	mult(int potencia, int count)
{
	int	aux;

	aux = 1;
	if (potencia == 0)
		return (1);
	while (potencia > 0)
	{
		aux = aux * count;
		potencia--;
	}
	return (aux);
}

int	getindex(char dig, char *base)
{
	int	i;
	int	flag;

	i = 0;
	while (base[i] != '\0')
	{
		if (dig == base[i])
		{
			return (i);
		}
		i++;
	}
	flag = 'n';
	return (flag);
}

int	to_dec(char *str, char *base, int i, int count)
{
	int		soma;
	char	a;
	int		count_mi;

	soma = 0;
	count_mi = 0;
	while ((str[i] == 43 || str[i] == 45) && str[i])
	{
		if (str[i] == 45)
			count_mi++;
		i++;
	}
	while (str[i])
	{
		a = getindex(str[i], base);
		if (a == 'n')
			break ;
		soma = (soma * count) + a;
		i++;
	}
	if (count_mi % 2 == 1)
		soma = soma * -1;
	return (soma);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		count_mi;
	int		count;
	int		soma;

	i = 0;
	count_mi = 0;
	count = 0;
	while (base[count] != '\0')
	{
		count++;
	}
	if (!check_in(base, count))
	{
		return (0);
	}
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	soma = to_dec(str, base, i, count);
	return (soma);
}

/*
#include <stdio.h>
int	main(void)
{
	int	b;
	char a[] = "     ---+-+-defababs1-ab-";
	b = ft_atoi_base(a, "abcdef");
	printf("soma %i", b);
	return (0);
}*/
