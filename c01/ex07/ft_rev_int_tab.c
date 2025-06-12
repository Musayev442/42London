#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_rev_int_tab(tab, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    size -= 1;
    int temp;

    while (i < size)
    {
        temp = tab[i];
        tab[i] = tab[size - i];
        tab[size - i] = temp;
        i++;
    }
}