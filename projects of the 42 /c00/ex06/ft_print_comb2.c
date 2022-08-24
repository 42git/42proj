/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:20:06 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/07 10:20:12 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchr(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a ++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			{
				ft_printchr((a / 10) + '0');
				ft_printchr((a % 10) + '0');
				ft_printchr(' ');
				ft_printchr((b / 10) + '0');
				ft_printchr((b % 10) + '0');
				if (a != 98)
				{
					ft_printchr(',');
					ft_printchr(' ');
				}
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
