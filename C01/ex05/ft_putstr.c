/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:14:18 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/09 15:25:41 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') //ca fonctionne aussi : str[i]
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	*str;

	str = "Heyy comment ca va toi?";
	ft_putstr(str);
}*/
