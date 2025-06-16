/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:04:07 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/16 15:09:07 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_str_is_printable(char *str);

int main() 
{
    
    char s[]="türkçe^&*#(#_)#_#)_#dSKDJLAJ656889";
    
    int num =ft_str_is_printable(s);
    
    printf("%d", num);

    return 0;
}*/

int	ft_str_is_printable(char *str)
{
	int	i;
	int	prt;

	i = 0;
	prt = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 0 || str[i] > 127)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
