#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
    size_t str_len;
    size_t substr_len;
    char *substr;

    if (!s)
        return (NULL);

    str_len = ft_strlen(s);

    if (start > str_len)
        return (ft_strdup(""));

    substr_len = str_len - start;
    if(substr_len > len)
        substr_len = len;

    substr = (char *)malloc(sizeof(char) * (substr_len + 1));
    if(!substr)
        return NULL;

    ft_strlcpy(substr, s + start, substr_len + 1);
    substr[substr_len] = '\0';
    return substr;
}