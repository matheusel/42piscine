/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:23:57 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/13 18:14:44 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main()
{	int	*div;
	int	*mod;
	int	a;
	int	b;
	
	a = 0;
	b = 5;	
	div = &a;
	mod = &b;
	printf("%i %i\n", *div, *mod);
	ft_div_mod(10, 5, div, mod);
	printf("%i %i\n", *div, *mod);

}
*/
