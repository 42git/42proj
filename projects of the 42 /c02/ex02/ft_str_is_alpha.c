/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:55:29 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/08 15:55:32 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str [c] != '\0')
	{
		if (!(str[c] >= 'a' && str[c] <= 'z')
			&& !(str[c] >= 'A' && str[c] <= 'Z'))
			return (0);
		c++;
	}
	return (1);
}
//int main(void)
//{
//	int x = ft_str_is_alpha("45");
//	printf("%d\n", x);
//	return 0;
//}
