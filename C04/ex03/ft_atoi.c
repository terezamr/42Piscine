/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:16:46 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/21 15:07:01 by mvicente         ###   ########.fr       */
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

int	main(void)
{
	int	b;

	char a[] = "   ++210";
	b = ft_atoi(a);
	printf("%i\n", b);
	return (0);
}