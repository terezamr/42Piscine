/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:49:12 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/16 12:25:18 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_letter(char *str, char *to_find, int i)
{
	int	a;
	int	g;

	g = 0;
	while (to_find[g])
	{
		if (str[i + g] != to_find[g])
		{
			a = 'n';
			break ;
		}
		else
			a = 'y';
		g++;
	}
	if (a == 'n')
		return (0);
	return (a);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		a = find_letter(str, to_find, i);
		if (a == 'y')
			return (&str[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *sub;
	char *sub2;
	char a[] = "rfafelafa";
	char b[] = "afa";

	sub = ft_strstr(a, b);
	sub2 = strstr(a, b);
	printf("%s %s", sub, sub2);
	return (0);
}
