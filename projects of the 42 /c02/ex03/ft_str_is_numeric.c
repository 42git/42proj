/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:55:41 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/09 22:15:54 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	num;
	int	x;

	num = 1;
	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= '0' && str[x] <= '9'))
		{
		num = 0;
		}
	x++;
	}
	return (num);
}
// int main(void) {
// 	char stringNonNumeric[] = "AabBcC#@dDeEfFgGzZ";
// 	char stringNumeric[] = "0123456789";
// 	char stringEmpty[] = "";
// 	printf("\nstringNumeric  = %s | stringNonNumeric
// 	= %s \n\n",stringNumeric, stringNonNumeric);
// 	printf("Calling 
// 	ft_str_is_numeric(stringNumeric);\n");
// 	if (ft_str_is_numeric(stringNumeric))
// 		printf("PASS Numeric Test (1)\n");
// 	else
// 		printf("FAIL Numeric Test (0)\n");
// 	printf("\nCalling ft_str_is_numeric(stringNonNumeric);\n");
// 	if (ft_str_is_numeric(stringNonNumeric))
// 		printf("FAIL Non Numeric Test (1)\n");
// 	else
// 		printf("PASS Non Numeric Test (0)\n");
// 	printf("\nCalling ft_str_is_numeric(empty);\n");
// 	if (ft_str_is_numeric(stringEmpty))
// 		printf("PASS Empty String Test (1)\n");
// 	else
// 		printf("FAIL Empty String Test (0)\n");
// 	return (0);
// }
