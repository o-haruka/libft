#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    char *result;
    unsigned int len_s;
    unsigned int i;

    if (!s || !f)
        return (NULL);

    len_s = ft_strlen(s);

    result = (char *)malloc(sizeof(char) * (len_s + 1));
    if(!result)
        return NULL;

    i = 0;
    while(s[i]){
        result[i] = f(i,s[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}

char to_upper(unsigned int i, char c){
     (void)i; 
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(void) {
    char str[] = "hello";
    char *result = ft_strmapi(str, to_upper);

    if (result) {
        printf("Original: %s\n", str);
        printf("Modified: %s\n", result);
        free(result); // 動的に確保したメモリを解放
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
