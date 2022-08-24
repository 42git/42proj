/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:56:29 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/09 22:18:25 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 32)
			return (0);
		x++;
	}
	return (1);
}
// int main(void) {	
// 	char stringPrintable[] = {'A','z','0','9','~'};
// 	char stringNonPrintable[] = {0x07,0x01,0x37};
// 	char empty[] = "";
// 	printf("\nstringPrintable  = %s \n\n",stringPrintable);
// 	printf("Calling ft_str_is_printable(stringPrintable);\n");
// 	ft_str_is_printable(stringPrintable)
// 	return (0);
// }
