#include <unistd.h>
#include "libft.h"
void    ft_putnbr_fd(int n, int fd)
{
    char    *n_in_ascii;
    
    n_in_ascii = ft_itoa(n);
    write(fd, n_in_ascii, ft_strlen(n_in_ascii));
}
