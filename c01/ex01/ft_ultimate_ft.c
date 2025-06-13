/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 17:52:41 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/13 17:53:58 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int n = 43;
	int *n1 = &n;
	int **n2 = &n1;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;
	int *********n9 = &n8;

	printf("before %d\n", n);

	ft_ultimate_ft(n9);

	printf("after %d", n);

	return (0);
}*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
