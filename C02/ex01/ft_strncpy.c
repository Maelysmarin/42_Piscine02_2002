/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:39:44 by mmarin            #+#    #+#             */
/*   Updated: 2022/02/15 13:24:00 by mmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int main()
{
	char dest[] = "Epic fail";
	char scr[] = "fuck off";
	printf("avant: %s\n%s\n", scr, dest);
	ft_strncpy(dest, scr, 2);
	printf("\napres: %s\n%s\n", scr, dest);
}*/
