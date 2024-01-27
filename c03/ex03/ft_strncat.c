/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:46:02 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/16 16:00:33 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while ((src[i] != '\0') && (i < nb))
	{
		dest[c] = src[i];
		i++;
		++c;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{	
	char	dest[] = "Test";
	char	src[] = "ando";

	printf("%s", ft_strncat(dest, src, 2));
}
*/
