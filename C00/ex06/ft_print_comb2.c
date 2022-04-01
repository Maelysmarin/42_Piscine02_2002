/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:27:47 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/07 14:19:16 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puntchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_puntchar(a / 10 + '0');
			ft_puntchar(a % 10 + '0');
			write(1, " ", 1);
			ft_puntchar(b / 10 + '0');
			ft_puntchar(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}	
			b ++;
		}
		a ++;
		b = a + 1;
	}
}
/*int main()
{
	ft_print_comb2();

}*/
