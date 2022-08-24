/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:24:02 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/16 00:24:03 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			answer *= nb;
			i++;
		}
		return (answer);
	}
}
// int main()
// {
// 	int a;
// 	a = 3;
// 	printf("%d", 	ft_iterative_power(a,3));
// }
