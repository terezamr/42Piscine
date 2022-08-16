/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:16:46 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/16 18:19:00 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	count_string(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	printf("\n%i\n", count);
	return (count);
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

int	ft_atoi(char *str)
{
	int	i;
	int	count_mi;
	int	number_f;
	int	end;

	i = 0;
	count_mi = 0;
	end = 0;
	while ((str[i] == 32 || str[i] == 12 || str[i] == 10)
		|| (str[i] == 13 || str[i] == 9 || str[i] == 11))
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
	end = i;
	while (str[end] >= '0' && str[end] <= '9')
	{
		end++;
	}
	number_f = str_num(str, i, end);
	if (count_mi % 2 == 1)
	{
		number_f = number_f * -1;
	}
	return (number_f);
}

int	main(void)
{
	int	b;

	char a[] = "     ---+--+123452346ab567";
	b = ft_atoi(a);
	printf("%i\n", b);
	return (0);
}