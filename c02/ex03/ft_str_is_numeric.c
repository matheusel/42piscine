/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:35:12 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/14 13:45:13 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	char	str[] = "2234";
	printf("%i", ft_str_is_numeric(str));
}
*/
