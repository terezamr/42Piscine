/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:54:30 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/24 00:18:29 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	to_dec(char *str, char *base, int i, int count);
int	check_in(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		count_mi;
	int		count;
	int		soma;

	i = 0;
	count_mi = 0;
	count = check_in(base);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == 43 || str[i] == 45) && str[i])
	{
		if (str[i] == 45)
			count_mi++;
		i++;
	}
	soma = to_dec(str, base, i, count);
	if (count_mi % 2 == 1)
		soma = soma * -1;
	if (soma < -2147483648 || soma > 2147483647)
		return (0);
	return (soma);
}

int	ft_strlen(char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
		count++;
	return (count);
}

int	get_len(int number, char *base_to)
{
	int				count;
	unsigned int	nb;
	int				base_len;

	count = 0;
	base_len = ft_strlen(base_to);
	if (number < 0)
	{
		nb = number * -1;
		count++;
	}
	else
		nb = number;
	while (nb >= (unsigned)base_len)
	{
		nb /= base_len;
		count++;
	}
	count++;
	return (count);
}

void	*ft_putnbr_base(int nbr, char *base, char *sp, int len_nb)
{
	int				count;
	long int		number;
	char			*aux;

	number = (long int) nbr;
	count = ft_strlen(base);
	aux = (char *)malloc(sizeof(char) * count);
	if (number < 0)
	{
		number = number * -1;
		sp[0] = '-';
	}
	while (number >= count)
	{
		sp[len_nb - 1] = base[number % count];
		number = number / count;
		len_nb--;
	}
	sp[len_nb - 1] = base[number];
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	int		len_nb;
	char	*sp;
	char	*d;

	if (check_in(base_to) == 0 || check_in(base_from) == 0)
	{
		return (0);
	}
	number = ft_atoi_base(nbr, base_from);
	len_nb = get_len(number, base_to);
	sp = (char *)malloc(sizeof(char) * (len_nb + 1));
	d = sp;
	if (!d)
		return (0);
	ft_putnbr_base(number, base_to, sp, len_nb);
	sp[len_nb] = '\0';
	return (sp);
}
/*
#include <stdio.h>
int	main(void)
{
	char nbr[] = "-+5C";
	char base_to[] = "0123456789";
	char base_from[] = "0123456789ABCDEF";
	char *res;
	int i;

	res = ft_convert_base(nbr, base_from, base_to);
	i = 0;
	while (res[i])
	{
		printf("res %i %c\n", i, res[i]);
		i++;
	}
	if (res == NULL)
		return (1);
	free(res);
	return (0);
}*/
