/*Esta función toma una cadena de caracteres como entrada y devuelve un número entero*/
#include "libft.h"

int ft_atoi(const char *str)
{
    int sign;
    int atoi;
    int i;

    sign = 1;
    atoi = 0;
    i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[0] == '+')
    {
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            break;
        }
        atoi = atoi * 10 + (str[i] - '0');
        i++;
    }
    return (sign * atoi);
}

