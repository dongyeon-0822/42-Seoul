int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    if (nb <= 0)
        return (0);
    else 
    {
        while (nb > 0)
        {
            result *= nb;
            nb--;
        }
        return (result);
    }
}

#include <stdio.h>

int main(void)
{
    int n = ft_iterative_factorial(3);
    printf("%d", n);
}