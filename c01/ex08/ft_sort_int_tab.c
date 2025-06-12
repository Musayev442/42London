#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Before sorting: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    ft_sort_int_tab(arr, size);

    printf("After sorting: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;

    while (i < size)
    {
        int j = 0;
        while (j < size)
        {
            if (tab[i] < tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}