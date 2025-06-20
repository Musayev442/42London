#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char s1[] = "ahc";
    char s2[] = "ahcd";

    int result = ft_strcmp(s1, s2);

    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, result);

    return 0;
}

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] || s2[i])
    {
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