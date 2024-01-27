/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:47:44 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/21 15:38:06 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		res *= nb * ft_recursive_factorial(nb -1);
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
	return (0);
}
*/
