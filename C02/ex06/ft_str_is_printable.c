/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:43:12 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/17 19:17:25 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 31) || (str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main ()
{
	char str[] = "";
	printf("%d", ft_str_is_printable(str));

}*/
