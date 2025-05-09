#include "libft.h"

static int	count_digits(int n)
{
    int	count;

    if (n <= 0)
        count = 1; // 負の数なら符号の分で1桁
    else
        count = 0;

    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char	*ft_itoa(int n)
{
    char	*str;
    int		len;
    long	nbr; // オーバーフロー対策でlongを使用

    nbr = n;
    len = count_digits(nbr);
    str = (char *)malloc(sizeof(char) * (len + 1)); // NULL終端用に+1
    if (!str)
        return (NULL);
    str[len] = '\0'; // 文字列の終端

    if (nbr == 0)
        str[0] = '0';
    else if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr; // 正の数に変換
    }

    while (nbr > 0)
    {
        str[--len] = (nbr % 10) + '0'; // 数字を文字に変換
        nbr /= 10;
    }
    return (str);
}