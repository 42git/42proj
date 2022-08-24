/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:56:06 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/09 22:16:34 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	ls;
	int	x;

	ls = 1;
	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'a' && str[x] <= 'z'))
		{
		ls = 0;
		}
	x++;
	}
	return (ls);
}
// int main(void) {	
// 	char stringLower[] = "abcdefgz";
// 	char stringNonLower[] = "AaZz";
// 	char empty[] = "";
// 	printf("\nstringLower  = %s | stringNonLower
// 	= %s \n\n",stringLower, stringNonLower);
// 	printf("Calling ft_str_is_lowercase(stringLower);\n");
// 	if (ft_str_is_lowercase(stringLower))
// 		printf("PASS Lowercase Test (1)\n");
// 	else
// 		printf("FAIL Lowercase Test (0)\n");
// 	printf("\nCalling ft_str_is_lowercase(stringNonLower);\n");
// 	if (ft_str_is_lowercase(stringNonLower))
// 		printf("FAIL Non Lowercase Test (1)\n");
// 	else
// 		printf("PASS Non Lowercase Test (0)\n");
// 	printf("\nCalling ft_str_is_lowercase(empty);\n");
// 	if (ft_str_is_lowercase(empty))
// 		printf("PASS Empty Strirg Test (1)\n");
// 	else
// 		printf("FAIL Empty String Test (0)\n");

// 	return (0);
// }
