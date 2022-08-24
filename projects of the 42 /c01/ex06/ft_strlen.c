/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:18:24 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/07 10:18:37 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*(str++) != '\0')
	{
		l++;
	}
	return (l);
}
// int main(void) {

// 	printf("Calling ft_strlen(\"123456789\");\n"); 
// 	printf("String Length: %d \n", ft_strlen("123456789"));

//     return (0);
// }