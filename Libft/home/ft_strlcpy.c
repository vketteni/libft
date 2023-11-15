
#include <stddef.h>
size_t ft_strlcpy(char *dst, char *src, size_t dst_size)
{
    size_t i;
    i = 0;

    if (dst_size > 0)
    {
        while (i < dst_size - 1 && src[i] != '\0')
        {
            src[i] = dst[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i] != '\0')
        i++;
    return (i);

}
