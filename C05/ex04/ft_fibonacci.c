/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:52:28 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/18 18:09:07 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	soma;

	a = 0;
	b = 1;
	if (index == 0)
	{
		soma = a;
	}
	else if (index == 1)
	{
		soma = b;
	}
	else if (index < 0)
	{
		return (-1);
	}
	else
	{
		soma = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		index--;
	}
	return (soma);
}
/*
#include <stdio.h>
int	main(void)
{
	int	b;
	int	soma;

	soma = 0;
	b = ft_fibonacci(-2);
	printf("a[i] %i\n", b);
}*/
