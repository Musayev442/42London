/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:18:58 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/16 14:55:01 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int ft_str_is_alpha(char *str);

int main() {
    
    char str[]="Thisisatext";
    
    int num = ft_str_is_alpha(str);
    printf("%d", num);

    return 0;
}*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			if (str[i] < 'a' || str[i] > 'z')
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}
