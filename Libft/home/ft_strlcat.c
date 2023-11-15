
#include <stddef.h>
char    *ft_strlcat(char    *dst, char  *src, size_t    dst_size)
{
    size_t  i;
    size_t  j;
    i = 0;
    j = 0;

    while (dst[i])
        dst[i++];
    if (i < dst_size)
    {
        while (src[j] && i + j < dst_size - 1)
        {
            *(dst + i + j) = *(src + j);
            j++;
        }
        *(dst + i + j) = '\0';
    }
    while (src[j])
        src[j++];
    return (i + j);
}
