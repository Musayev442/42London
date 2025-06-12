#include <stdio.h>

// Function prototype
int ft_strlen(const char *str);

int main(void)
{
    const char *test_str = "Hello, World!";
    int length;

    length = ft_strlen(test_str);

    printf("Length: %d\n", length);

    return 0;
}

// Implement ft_strlen here
int ft_strlen(const char *str)
{
    int length = 0;
    while (str[length])
    {
        length++;
    }
    return length;
}