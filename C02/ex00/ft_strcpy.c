/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:39:01 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/17 12:23:59 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char dest[] = "Epic fail";
	char src[] = "Fuck off";
	printf("avant:%s\n%s", src, dest);
	ft_strcpy(dest, src);	
	printf("\napres:%s\n%s", src, dest);
}*/
