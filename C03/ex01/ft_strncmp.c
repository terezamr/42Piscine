/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:43:59 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/23 14:28:43 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[] = "paa";
	char b[] = "paaz";
	int	c;
	int d;

	d = strncmp(a, b, 3);
	c = ft_strncmp(a, b, 3);
	printf("%i %i", c, d);
	return (0);
}
