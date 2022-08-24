/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:00:30 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/16 23:01:17 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*copy;

	i = 0;
	n = ft_strlen(src);
	copy = (char *)malloc(n * sizeof(char) + 1);
	if (copy == NULL)
		return (0);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*int main()
{
	char *copy = "Hello";
	char *paste = NULL;

	paste = ft_strdup(copy);
	printf("%s", paste);
}*/
