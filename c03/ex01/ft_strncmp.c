#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char s1[] = "ahc";
    char s2[] = "agcd";

    int result = ft_strncmp(s1, s2, 3);

    printf("ft_strncmp(\"%s\", \"%s\") = %d\n", s1, s2, result);

    return 0;
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;

    while (s1[i] || s2[i])
    {
        if (i >= n)
        {
            break;
        }

        if (s1[i] > s2[i])
        {
            return (s1[i] - s2[i]);
        }
        else if (s1[i] < s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }

    return 0;
}