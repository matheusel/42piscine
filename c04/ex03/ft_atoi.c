/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:54:23 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/21 13:08:40 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_especial_caracter(char c)
{
	if ((c >= 9 && c <= 13) || (c == ' '))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	result;

	result = 0;
	i = 0;
	signal = 1;
	while (is_especial_caracter(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = signal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (signal * result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{	
	char	str[] = " -+1234ab567";
	printf("%i\n", ft_atoi(str));
	printf("%i\n", atoi(str));
	return (0);
}
*/
