#include <unistd.h>
#include "libft.h"

void    ft_putnbr_fd_rek(long n, int fd)
{
    char    ascii;

    if (n > 9)
    {
        ft_putnbr_fd(n/10, fd);
        ascii = (n % 10) + '0';
        write(fd, &ascii, 1);
    }
    else
    {
        ascii = n + '0';
        write(fd, &ascii, 1);
    }
}

void    ft_putnbr_fd(int n, int fd)
{
    long    nbr;

    nbr = (long)n;
    if (nbr < 0)
    {
        write(fd, "-", 1);
        nbr = -nbr;
    }
    ft_putnbr_fd_rek(nbr, fd);
}
