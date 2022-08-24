/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:19:41 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/08 18:28:39 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_prntnum(char d, char e, char f)
{
	write(1, &d, 1);
	write(1, &e, 1);
	write (1, &f, 1);
	if (d != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_prntnum (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
// int	main(void)
// {
//  	ft_print_comb();
//  	return (0);
//  }	
