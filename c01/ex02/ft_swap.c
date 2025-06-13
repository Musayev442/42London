/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 17:57:24 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/13 17:59:16 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    ft_swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
