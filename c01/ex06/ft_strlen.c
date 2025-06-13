/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:50:40 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/13 18:53:24 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char test_str[] = "This is a test message";
    int length;

    length = ft_strlen(test_str);

    printf("Length: %d\n", length);

    return 0;
}*/

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}
