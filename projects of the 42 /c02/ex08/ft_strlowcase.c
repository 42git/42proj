/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:56:57 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/08 15:57:01 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z'))
		{
		str[x] += 'a' - 'A';
		}
	x++;
	}
	return (str);
}
//int main(void)
//{
//	char y[] = "Lihg";
//	char *x = ft_strlowcase(y);
//	printf("%s\n", x);
//	return 0;
//}