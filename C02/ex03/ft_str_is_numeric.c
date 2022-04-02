/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:41:02 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/14 19:11:49 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9') || str[i] == '\0')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main()
{
	char str[] = "hgjn454";
	printf("%d", ft_str_is_numeric(str));
}*/
