/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:56:43 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/08 15:56:47 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z'))
		{
		str[x] -= 32;
		}
	x++;
	}
	return (str);
}
/*int main()
{
	char a[] = " SDASs jksdksalhdksl";
	int j = 0;
	ft_strupcase(ar);
	while(ar[j] != '\0')
	{
		printf("%c" ,ar[j]);
		j++;
	}
}*/