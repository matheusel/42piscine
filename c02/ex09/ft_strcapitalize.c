/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:53:01 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/17 11:09:45 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(char *str, int i)
{
	if ((str[i - 1] == 32 || str[i - 1] == 45) || str[i - 1] == 43)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[++c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
		{
			str[c] = str[c] + 32;
		}
	}
	while (str[++i] != '\0')
	{
		if (is_valid(str, i) == 1)
			str[i] = str[i] - 32;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "ola, tudo bEM? 42palavras QUARENTA-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
}
*/
