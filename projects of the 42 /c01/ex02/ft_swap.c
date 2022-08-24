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

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
// void ft_swap(int *a, int *b);

// int main(void) {
// 	int a = 10;
// 	int b = 20;
// 	printf("a = %d: b = %d\n",a,b);
// 	printf("Calling ft_swap(&a, &b);\n");
// 	ft_swap(&a,&b);
// 	printf("a = %d: b = %d\n",a,b);

//     return (0);
// }