/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:41:40 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/14 22:41:44 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] && s2[x])
	{
		if (s1[x] != s2[x])
			break ;
		x++;
	}
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}

void	ft_sort(int size, char **av)
{
	int		x;
	int		y;
	char	*temp;

	x = 0;
	while (x < size - 1)
	{
		y = 1;
		while (y < (size - x - 1))
		{
			if (ft_strcmp(av[y], av[y + 1]) > 0)
			{
				temp = av[y];
				av[y] = av[y + 1];
				av[y + 1] = temp;
			}
			y++;
		}
		x++;
	}
}

int	main(int ac, char **av)
{
	int		x;
	int		y;

	ft_sort(ac, av);
	y = 1;
	while (y < ac)
	{
		x = 0;
		while (av[y][x])
		{
			write(1, &av[y][x], 1);
			x++;
		}
		y++;
		write(1, "\n", 1);
	}
	return (0);
}
