/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhlifi <skhlifi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:01:46 by skhlifi           #+#    #+#             */
/*   Updated: 2022/08/24 15:04:46 by skhlifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	checkerror(char *str)
{
	int	c;
	int	cf;
	int	l;

	l = ft_strlen(str);
	c = 0;
	if (str[0] == '\0' || l == 1)
		return (0);
	while (str[c] != '\0')
	{
		if (str[c] <= 32 || str[c] == 127 || str[c] == 43 || str[c] == 45)
			return (0);
		cf = c + 1;
		while (cf < ft_strlen(str))
		{
			if (str[c] == str[cf])
				return (0);
			cf++;
		}
		c++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lnt;
	int		eror;
	long	nb;

	lnt = ft_strlen(base);
	eror = checkerror(base);
	nb = nbr;
	if (eror == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < lnt)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= lnt)
		{
			ft_putnbr_base(nb / lnt, base);
			ft_putnbr_base(nb % lnt, base);
		}
	}
}
