/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:09:31 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/13 19:25:13 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a = 28;
    int b = 9;
    ft_ultimate_div_mod(&a, &b);
    printf("div = %d, mod = %d\n", a, b);
    return 0;
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	if (a != 0)
	{
		tmp_a = *a / *b;
		tmp_b = *a % *b;
		*a = tmp_a;
		*b = tmp_b;
	}
}
