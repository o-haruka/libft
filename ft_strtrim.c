#include "libft.h"
char *ft_strtrim(char const *s1, char const *set){
    char *trimmed;
    size_t start;
    size_t end;
    size_t len;

    if(!s1||!set)
        return NULL;

    start = 0;
    while(s1[start] && ft_strchr(set,s1[start]))
        start++;

    end = ft_strlen(s1);
    while(start<end && ft_strchr(set,s1[end - 1]))
        end--;

    len = end - start;
    trimmed = (char *)malloc(sizeof(char) * (len + 1));
    if(!trimmed)
        return NULL;

    ft_strlcpy(trimmed, s1 + start, len + 1);

    return trimmed;
}
