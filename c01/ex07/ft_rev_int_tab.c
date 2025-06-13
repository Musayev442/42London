/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:54:25 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/13 18:56:51 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_rev_int_tab(tab, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size -= 1;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = temp;
		i++;
	}
}
