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

#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{

	char s[] = "jsjajsjnsnak";

	int num = ft_str_is_printable(s);

	printf("%d", num);

	return 0;
}

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
