/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:27:36 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/16 00:27:43 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	while (a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	if (nb == 1 || nb == 0 || nb < 0)
	{
		return (0);
	}
	return (1);
}