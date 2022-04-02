/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:12:12 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/22 12:14:33 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_execption(int p)
{
	if (p == 0)
		ft_putchar(p + 48);
	if (p == -2147483648)
		write (1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	str[10];

	i = 0;
	ft_execption(nb);
	if ((nb < 0) && (nb != -2147483648))
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (nb > 0)
	{
		str[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(str[i]);
	}
}

/*int	main(void)
{
	int	nbr;

	nbr = -10;
	ft_putnbr(nbr);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}*/
