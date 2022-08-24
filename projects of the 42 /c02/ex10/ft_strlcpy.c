/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:23:45 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/09 22:32:22 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
// int main(void) {
// 	char string[] = "123456789";
// 	char ret[] = "*********";
// 	unsigned int n = 10;
// 	printf("Return size %u | src String %s | de
// 	st String %s \n",ft_strlcpy(ret,string,n),string,ret);
// }
