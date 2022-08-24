/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:26:15 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/16 00:27:24 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	while (a * a <= nb && a < 46341)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}
/*int	ft_sqrt(int nb);
int main()
 {
 	int a;
 	a = 4;
 	printf("%d", 	ft_sqrt(1000));
 }*/
