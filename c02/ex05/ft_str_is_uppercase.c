/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:09:13 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/14 15:11:52 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char	str[] = "AAAAAASAFDV";
	printf("%i", ft_str_is_uppercase(str));
}
*/
