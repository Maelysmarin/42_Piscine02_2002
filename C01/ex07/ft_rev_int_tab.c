/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 08:28:37 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/11 12:57:24 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		temp = tab [size - 1];
		tab [size - 1] = tab [i];
		tab [i] = temp;
		i++;
		size--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 8};
	
	printf("0, 1, 2, 3, 8\n");
	ft_rev_int_tab( tab, 5);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
