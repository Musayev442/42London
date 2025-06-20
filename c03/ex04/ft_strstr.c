#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
    char str[] = "Hello, World! ";
    char to_find[] = "llo";

    char *result = ft_strstr(str, to_find);

    if (result)
        printf("ft_strstr(\"%s\", \"%s\") = \"%s\"\n", str, to_find, result);
    else
        printf("ft_strstr(\"%s\", \"%s\") = NULL\n", str, to_find);

    return 0;
}

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    return NULL;
}