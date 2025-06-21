/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:57:21 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/16 15:00:12 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main()
{

	char s[] = "sdsAds";

	int num = ft_str_is_lowercase(s);

	printf("%d", num);

	return 0;
}

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
