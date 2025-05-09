#include "libft.h"

char *ft_strchr(const char *s, int c){
    while(*s){
        if(*s == (char)c){
            return (char *)s;
        }
        s++;
    }

    if((char)c == '\0'){
        return (char *)s;
    }

    return NULL;
}

// int main(void){
//     const char test[] = "abcdef";
//     char search_char = 'c';
//     char *result = ft_strchr(test, search_char);

//     printf("検索文字は%c\n検索文字が指す場所は'%p'です\n", *result, result);

//     return 0;
// }