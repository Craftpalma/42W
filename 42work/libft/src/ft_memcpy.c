#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *d;
    char    *s;

    d = dst;
    s = (char *)src;
    while (n--)
        *d++ = *s++;
    return (dst);
}
