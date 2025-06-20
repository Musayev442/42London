#include <stdio.h>

int main()
{
    char s1[20] = "Hello, ";
    char s2[] = "World!";

    char *result = ft_strcat(s1, s2);

    printf("ft_strcat(\"%s\", \"%s\") = \"%s\"\n", s1, s2, result);

    return 0;
}

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i])
    {
        i++;
    }

    while (src[j])
    {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';

    return dest;
}