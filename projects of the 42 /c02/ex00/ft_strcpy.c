/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:54:50 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/09 22:33:45 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main(void) {	
// 	char src_string[] = "Test_Src_String";
// 	char dest_string[] = "Test_Dest_String";
// 	char ret_string[] = "Return_String";
// 	printf("return = %s | dest = %s | src = %s\n",r
// 	et_string,dest_string,src_string);
// 	printf("Calling return 
// 	=  ft_strcpy(dest,src);\n");
// 	printf("return = %s | dest = %s | src = %s\n",
// 	ft_strcpy(dest_string,src_string),dest_string,src_string);
//     return (0);
// }
