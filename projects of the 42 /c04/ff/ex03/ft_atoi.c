/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhlifi <skhlifi@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:01:09 by skhlifi           #+#    #+#             */
/*   Updated: 2022/08/24 15:01:11 by skhlifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_pow_rec(int i, int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (i);
	return (i * ft_pow_rec(i, n - 1));
}

int	ft_atoi(char *str)
{
	int	res;	
	int	neg;
	int	i;

	i = 0;
	res = 0;
	neg = 1;
	while (*str <= 32)
		str++;
	while (*str && ((*str == '-' || *str == '+')))
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str && ((*str >= '0' && *str <= '9')))
		str++;
	str--;
	while ((*str >= '0' && *str <= '9'))
	{
		res += ((*str--) - '0') * ft_pow_rec(10, i++);
	}
	return ((int)(res * neg));
}
/*int main(void)
 {
	char	*str;
 	str = "---+---+2147483647ab567";
 	printf("%d\n", ft_atoi(str));
 }*/
