/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:18:18 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/13 18:15:38 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int	leng;
	char	*string;

	string = "stringtestr";
	leng = ft_strlen(string);
	printf("%i", leng);
}
*/
