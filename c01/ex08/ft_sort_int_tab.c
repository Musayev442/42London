/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:57:41 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/13 19:01:56 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int arr[] = {5, 2, 9, -3, -8, 1, 5,-4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Before sorting: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    ft_sort_int_tab(arr, size);

    printf("After sorting: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
