/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:31:10 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/14 14:29:39 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			c = 0;
			return (c);
		}
		i++;
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{	
	char	str[] = "asdadasd";
	printf("%i", ft_str_is_alpha(str));
}
*/
