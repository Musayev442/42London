/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:27:43 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/16 18:30:27 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main() {
    
    char s[] = "Hello world!";
    char d[6];

    
    unsigned int tmp = ft_strlcpy(d, s, 6);
    //printf("%d", tmp);

    return 0;
}*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
