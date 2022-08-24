/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:10:46 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/08 16:10:53 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x1;
	unsigned int	x2;

	x1 = 0;
	x2 = 0;
	while (dest[x1] != '\0')
		x1++;
	while (src[x2] != '\0' && x2 < nb)
	{
		dest[x1] = src[x2];
			x1++;
			x2++;
	}
	dest[x1] = '\0';
	return (dest);
}
// int	main (void)
// {
// 	char dest[30] = "Hello";
// 	char src[] = "world";
// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// }
