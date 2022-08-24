/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:33:45 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/08 13:55:14 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

		i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
// int main(void) {	
// 	int a[5] = {1,2,3,4,5};
// 	int i = 0;
// 	int size = (sizeof(a)/sizeof(int));
// 	printf("a = ");
// 	for (i = 0;i < size;i++)
// 		printf("%d ",*(a+i));
// 	printf("\nCalling ft_rev_int_tab(a, 5);\n"); 
// 	ft_rev_int_tab(a, size);
// 	printf("a = ");
// 	for (i = 0;i < size;i++)	
// 		printf("%d ",*(a+i));
//     return (0);
// }
