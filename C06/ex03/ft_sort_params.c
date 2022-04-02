/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:49:58 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/23 20:11:58 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] == str2[i]) && (str1[i] && str2[i]))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_compare(int ac, char **av)
{
	int		i;
	char	*resultat;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			resultat = av[i];
			av[i] = av[i + 1];
			av[i + 1] = resultat;
			i = 0;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_compare(ac, av);
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
