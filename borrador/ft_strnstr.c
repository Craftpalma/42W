#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	if (*small == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (small[j] != '\0' && big[i + j] == small[j] && i + j < len)
			j++;
		if (big[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

