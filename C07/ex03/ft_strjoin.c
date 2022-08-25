/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:37:02 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 12:25:56 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	get_len_tot(int size, char **strs, char *sep)
{
	int	i;
	int	count;
	int	tot;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + str_len(strs[i]);
		count = count + str_len(sep);
		i++;
	}
	count = count - str_len(sep);
	tot = sizeof(char) * (count + 1);
	return (tot);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sp;
	int		i;
	char	*d;

	i = 0;
	if (!size)
		return ((char *)malloc(sizeof(char)));
	if (!strs || !sep)
		return (0);
	sp = (char *)malloc(get_len_tot(size, strs, sep));
	if (!sp)
		return (0);
	d = sp;
	while (i < size - 1)
	{
		ft_strcpy(d, strs[i]);
		d = d + str_len(strs[i]);
		ft_strcpy(d, sep);
		d = d + str_len(sep);
		i++;
	}
	ft_strcpy(d, strs[i]);
	d = d + str_len(strs[i]);
	*d = '\0';
	return (sp);
}

int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello1";
	strs[1] = "friend";
	strs[2] = "you ar2e awesome";
	separator = "5";
	result = ft_strjoin(2, strs, separator);
	printf("%s$\n", result);
	free(result);
}
