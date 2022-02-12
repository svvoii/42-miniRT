#include "libft.h"

double      ft_atod(char *str)
{
    int f;
    double s;
    int div;
    double res;
    int negative;

    f = ft_atoi(str);
    f = f < 0 ? f * -1 : f;
    negative = str[0] == '-';
    div = get_range((long)f, negative);
    str += sizeof(char) * (div);
    if (*str == '.')
        str += sizeof(char);
    s = (double)ft_atoi(str);
    div = ft_strlen(str);
    while (--div >= 0)
        s /= 10;
    res = (double)(s + f);
    if (negative)
        res *= -1;
    return (res);
}