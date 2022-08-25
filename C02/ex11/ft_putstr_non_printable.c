/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:16:51 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/16 15:23:26 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 20 && str[i] <= 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
				c = 256 + str[i];
			else
				c = str[i];
			ft_putchar("0123456789abcdef"[c / 16]);
			ft_putchar("0123456789abcdef"[c % 16]);
		}
		i++;
	}
}
/*
int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/