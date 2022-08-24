/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalwahei <ja3far54@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:44:10 by jalwahei          #+#    #+#             */
/*   Updated: 2022/08/08 13:57:11 by jalwahei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	count;

	count = 0;
	while (count < (size -1))
	{
		if (tab[count] > tab[count + 1])
		{
			tmp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = tmp;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}
// int main(void) {
// 	int a[5] = {2,3,1,5,4};
// 	int i = 0;
// 	int size = (sizeof(a)/sizeof(int));

// 	printf("a = ");
// 	for (i = 0;i < size;i++)
// 		printf("%d ",*(a+i));
// 	printf("\nCalling ft_sort_int_tab(a, 5);\n");
// 	ft_sort_int_tab(a, size);
// 	printf("a = ");
// 	for (i = 0;i < size;i++)	
// 		printf("%d ",*(a+i));

//     return (0);
// }