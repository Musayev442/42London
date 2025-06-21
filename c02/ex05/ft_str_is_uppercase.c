/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:00:41 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/16 15:03:10 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{

	char s[] = "ASDFF";

	int num = ft_str_is_uppercase(s);

	printf("%d", num);

	return 0;
}

int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
