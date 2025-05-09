#include "libft.h"

int ft_atoi(const char *str){
    int result;
    int sign;

    result = 0;
    sign = 1;

    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
        str++;

    if(*str == '+' || *str == '-'){
        if(*str == '-')
            sign *= -1;
        str++;
    }

    while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
    return (result * sign);
}