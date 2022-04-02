/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:30:07 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/16 11:18:47 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_is_alpha_num(char c)
{
	if (ft_is_alpha(c) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (i > 0)
			if (ft_is_alpha(str[i]) && ! ft_is_alpha_num(str[i -1]))
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/
