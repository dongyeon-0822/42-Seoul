#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    
    i = 1;
    if (ac > 1)
    {
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
                write(1, &av[i][j++], 1);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}