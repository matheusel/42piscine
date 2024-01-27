/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc-m-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:01:50 by mc-m-el-          #+#    #+#             */
/*   Updated: 2023/09/13 18:18:22 by mc-m-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	temp;

	i = 0;
	c = 0;
	while (c < size / 2)
	{
		temp = tab[size - 1 - c];
		tab[size - 1 - c] = tab[c];
		tab[c] = temp;
		c++;
	}
}
/*
#include <stdio.h>

int     main(void)
{	
	int     arr[] = {2, 8, 0, 9};
        int     c;
        int     i;

        i = 0;
        c = 4; 
        ft_rev_int_tab(arr, c);
	while (i < c)
	{
		printf("%i", arr[i]);
		i++;
	}
	return (0);
}
*/
