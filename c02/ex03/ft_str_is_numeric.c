/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:00:53 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/16 14:56:38 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main() {
    
    char s[]="Thisisatex}^&@)_";
    
    int num =ft_str_is_numeric(s);
    printf("%d", num);

    return 0;
}
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
