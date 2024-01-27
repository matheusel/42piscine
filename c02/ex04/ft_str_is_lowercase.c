/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:45:58 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/14 14:20:46 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	str[] = "asdasasdaAa";
	printf("%i", ft_str_is_lowercase(str));
}
*/
