/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:11:32 by lpan              #+#    #+#             */
/*   Updated: 2018/11/07 16:11:35 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main()
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\nmod: %d\n", div, mod);
	return (0);
}
