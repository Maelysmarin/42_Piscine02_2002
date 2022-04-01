/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 08:52:14 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/13 14:47:11 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	y;

	i = 0;
	while (i < size - 1)
	{
		y = i + 1;
		while (y < size)
		{
			if (tab[i] > tab [y])
			{
				temp = tab[i];
				tab[i] = tab [y];
				tab [y] = temp;
			}
			y++;
		}
		i++;
	}
}

/*#include <stdio.h>
int	main()
{
	int tab[5] = {55,10,59,0,54};
	ft_sort_int_tab(tab, 5);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
