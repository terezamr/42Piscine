/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:53:56 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 16:41:18 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		g;
	char	a;
	int		j;

	i = 0;
	g = 0;
	while (str[i])
		i++;
	j = i;
	j--;
	while (g < i / 2)
	{
		a = str[g];
		str[g] = str[j];
		str[j] = a;
		g++;
		j--;
	}
	
	return (str);
}

int	main(void)
{
	char b[] = "za";

	printf("%s", ft_strrev(b));
}
