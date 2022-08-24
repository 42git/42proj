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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main(void) {
// 	int a = 25;
// 	int b = 10;
// 	int div = 0;
// 	int mod = 0;

// 	printf("a = %d: b = %d: div = %d: mod = %d\n",a,b,div,mod);
// 	printf("Calling ft_div_mod(a, b, div, mod);\n");
// 	ft_div_mod(a,b,&div,&mod);
// 	printf("a = %d: b = %d: div = %d: mod = %d\n",a,b,div,mod);

//     return (0);
// }