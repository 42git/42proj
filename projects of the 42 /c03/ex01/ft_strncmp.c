/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:29:29 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/21 12:29:34 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
// int main() {	
// 	char str_cmp1[12] = "ABCDEFAQrSt";
// 	char str_cmp2[12] = "ABCDEFZQrSt";
// 	char empty[] = "";
// 	unsigned int ret;
// 	printf("Calling ft_strncmp(s1,s2,n);\n");
//     ret=ft_strncmp(str_cmp1,str_cmp2,6);
// 	if (ret == 0)
// 		printf("Comparing [s1] %s with [s2] %s n = 6 
// 		| PASS ret %d\n",str_cmp1,str_cmp2,ret);
// 	return (0);
// }
