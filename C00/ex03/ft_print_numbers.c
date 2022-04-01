/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:51:40 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/07 16:21:41 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	chiffres;

	chiffres = '0';
	while (chiffres <= '9')
	{
		write(1, &chiffres, 1);
		chiffres ++;
	}
}
/*int main()
{
	ft_print_numbers();
}*/
