/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:59:34 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/16 22:40:16 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_in(char *base, int count)
{
	int	i;
	int	g;

	i = 0;
	if (count <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32 || base[i] == 12 || base[i] == 10 || base[i] == 13 || base[i] == 9 || base[i] == 11)
			return (0);
		g = 0;
		while (g < count)
		{
			if (base[i] == base[g] && i != g)
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

	i = 0;
	while (base[i] != '\0')
	{
		if (dig == base[i])
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	to_dec(char *str, char *base, int i, int count)
{
	int		soma;
	char	a[32];
	int 	g;

	soma = 0;
	g = 0;
	while (str[i])
	{
		a[g] = getindex(str[i], base);
		printf(" indice %i\n", a[g]);
		i++;
		g++;
	}
	printf(" i %i\n", i);
	printf("g %i\n", g);
	i = 0;
	while (a[i] != '\0')
	{
		printf("a[i] %i\n", a[i]);
		printf("g - 1 %i\n", g - 1);
		printf("mult(g - 1) %i\n", mult(g - 1, count));
		soma = soma + (a[i] * mult(g - 1, count));
		i++;
		g--;
	}
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
	while (str[i] == 32 || str[i] == 12 || str[i] == 10 || str[i] == 13 || str[i] == 9 || str[i] == 11)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			count_mi++;
		}
		i++;
	}
	printf("count %i\n", count);
	soma = to_dec(str, base, i, count);
	return (soma);
//	if (count_mi % 2 == 1)
//	{
//		number_f = number_f * -1;
//	}
}

int	main(void)
{
	int	b;
	char a[] = "     ---+-+1001";
	b = ft_atoi_base(a, "0123456789ABCDEF");
	printf("soma %i", b);
	return (0);
}
