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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
// int main(void) {
// 	int a = 25;
// 	int b = 10;

// 	printf("a = %d: b = %d:\n",a,b); 
// 	printf("Calling ft_div_mod(a, b);\n"); 
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("a(div) = %d: b(mod) = %d: ",a,b);

//     return (0);
// }
