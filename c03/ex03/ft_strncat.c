#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char s1[20] = "Hello, ";
    char s2[] = "World!";

    char *result = ft_strncat(s1, s2, 3);

    printf("ft_strncat(\"%s\", \"%s\", 3) = \"%s\"\n", s1, s2, result);

    return 0;
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i])
    {
        i++;
    }

    while (src[j])
    {
        if (j >= nb)
        {
            break;
        }
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';

    return dest;
}