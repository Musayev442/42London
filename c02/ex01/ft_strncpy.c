/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:07:32 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/14 15:09:36 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main() {
    
    char s[]="Hello World!";
    char d[25]="Write code!";
    
    char *tmp = ft_strncpy(d, s, 6);
    printf("%s", tmp);

    return 0;
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
