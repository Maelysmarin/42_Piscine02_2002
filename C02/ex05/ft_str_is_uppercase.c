/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:42:36 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/17 19:08:29 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '\0'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int	main()
{
	char str[] = "FHdfdJSK";
	printf("%d", ft_str_is_uppercase(str));
}*/
