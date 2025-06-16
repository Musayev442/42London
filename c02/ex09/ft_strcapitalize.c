/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusayev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:08:08 by mmusayev          #+#    #+#             */
/*   Updated: 2025/06/16 17:13:35 by mmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int main() 
{
    
    char s[]="hi, how are you? 42words forty-two; fifty+and+one";
    printf("%s\n", s);
    
    char *str = ft_strcapitalize(s);
    
    printf("%s", str);

    return 0;
}*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i -1] < 'A' || str[i -1] > 'Z')
			{
				if (str[i - 1] < '0' || str[i - 1] > '9')
				{
					if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
