/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:37:29 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/11 09:23:08 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tempo;

	tempo = *b;
	*b = *a;
	*a = tempo;
}

/*#include <stdio.h>
int main()
{
	int a;
	int b;

	a = 3;
	b = 4;

	printf("a = %d | b = %d\n", a, b);

	ft_swap(&a, &b);
	printf("swap...\n");

	printf("a = %d | b = %d\n", a, b);
	return (0);
}*/
