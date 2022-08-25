/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:39:01 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/11 21:23:57 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_type(int number)
{
	int	g;
	int	b;

	g = 'a';
	while (g <= 'z')
	{
		if (number == g)
		{
			b = 'y';
			return (b);
			break ;
		}
		else if (number != g)
		{
			b = 'n';
		}
		g++;
	}
	return (b);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (check_type(str[i]) == 'y')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}

/*int main()
{
    char a[] = "baAasgsg9";

	ft_strupcase(a);
  	return (0);
}*/
