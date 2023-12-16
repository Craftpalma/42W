#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len;
    char *ptr;

    len = ft_strlen(s) + 1;
    ptr = malloc(len);
    if (ptr != NULL)
    {
        ft_memcpy(ptr, s, len);
    }
    return (ptr);
}
