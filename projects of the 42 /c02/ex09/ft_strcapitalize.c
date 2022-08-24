/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:57:10 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/09 22:31:58 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	s;

	i = 0;
	s = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (s == 1)
			str[i] -= 32;
			s = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		s = 0;
		else
	s = 1;
	i++;
	}
	return (str);
}
// int main(void) {
// 	char string[] = "Falut, comment tu vas ? 
// 	42mots quarante-deux; cinquante+et+um";
// 	char string1[] = "sALUT, cOMMENT tU vA
// 	S ? 42MOTS qUARANTE-dEUX; cINQUANTE+eT+uM";
// 	char string2[] = 
// 	"42-is great+awesome!";
// 	printf("\nString = %s  \n",string);
// 	printf("Calling ft_strcapitalize(string);\n");
// 	printf("Return String 
// 	= %s \n\n",ft_strcapitalize(string));
// 	printf("\nString1 = %s  \n",string1);
// 	printf("Calling ft_strcapitalize(string1);\n");
// 	printf("Return String = %s \n\n",ft_strcapitalize(string1));
// 	printf("\nString2 = %s  \n",string2);
// 	printf("Calling ft_strcapitalize(string2);\n");
// 	printf("Return String = %s \n\n",ft_strcapitalize(string2));
// 	return (0);
// }
