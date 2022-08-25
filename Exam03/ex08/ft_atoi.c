/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:55:46 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 21:40:19 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	count_mi;
	int	count;
	int	number;

	i = 0;
	count_mi = 1;
	count = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (i == 45)
			count_mi = -1;
		i++;
		if (str[i] == 43 || str[i] == 45)
			return (0);
	}
	while ((str[i] >= '0' || str[i] <= '9') && str[i])
	{
		number = str[i] - '0';
		count = (count * 10) + number;
		i++;
	}
	return (count);
}

int	main(void)
{
	int	b;

	b = ft_atoi("   +2");
	printf("%i", b);
	return (0);
}
