/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:26:02 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/13 18:15:04 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	printf("%i %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%i %i\n", a, b);
}
*/
