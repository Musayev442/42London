#include <stdio.h>

void ft_ft(int *nbr);

int     main(void)
{
        int n = 43;
		
        printf("before %d\n", n);
        
        ft_ft(&n);
        
        printf("after %d", n);

        return (0);
}

void    ft_ft(int *nbr)
{
        *nbr = 42;
}
