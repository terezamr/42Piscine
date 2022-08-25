/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:29:42 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/17 16:42:28 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				g;
	unsigned int	i;

	i = 0;
	g = 0;
	while (src[g])
	{
		g++;
	}
	if (size != 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
	}
	return (g);
}

/*int	main(void)
{
	char	a[] = "hocdsus";
	char	b[4];
	int g;
	g = ft_strlcpy(b, a, 4);
	printf("%s", b);
	printf("%d", g);
	return (0);
}*/
