/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:54:30 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/21 16:23:14 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

char	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		count_mi;
	int		count;
	int		soma;
	char 	fin;

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
	i = 0;
	while (i < count)
	{
		ft_putchar(soma / count_m(count) + 48);
		soma = soma % count_m(count);
		i++;
	}
	return (1);
}

int	ft_strlen(char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				count;
	unsigned char	*base_unsigned;
	long int		number;

	number = (long int) nbr;
	base_unsigned = (unsigned char *)base;
	count = ft_strlen(base);
	if (check_in(base, count))
	{
		if (number < 0)
		{
			number = number * -1;
			ft_putchar(45);
		}
		if (number < count)
			ft_putchar(base_unsigned[number]);
		if (number >= count)
		{
			ft_putnbr_base(number / count, base);
			ft_putnbr_base(number % count, base);
		}
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	count_mi;
	int	number_f;
	int	end;

	i = 0;
	count_mi = 0;
	end = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == 43 || str[i] == 45) && str[i])
	{
		if (str[i] == 45)
			count_mi++;
		i++;
	}
	end = i;
	while (str[end] >= '0' && str[end] <= '9')
		end++;
	number_f = str_num(str, i, end);
	if (count_mi % 2 == 1)
		number_f = number_f * -1;
	return (number_f);
}

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	int		number_l;
	char	*dec;

	dec = "0123456789";
	number = ft_atoi(nbr);
	printf("%i\n", number);
	if (base_to == dec)
	{
		ft_atoi_base(nbr, base_from);
	}
	else if (base_from == dec)
	{
		ft_putnbr_base(number, base_to);
	}
	return (nbr);
}

int	main(void)
{
	ft_convert_base("   ++111", "01", "0123456789");
}
