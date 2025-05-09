#include "libft.h"

char *ft_strrchr(const char *s, int c){
    char *last;
    last = 0;

    while(*s){
        if(*s == (char)c){
            last = (char *)s;
        }
        s++;
    }

    if(c == '\0'){
        return (char *)s;
    }

    return last;
}

// int main(void){
//     const char test[] = "abcb";
//     char search_char = 'b';
//     char *result = ft_strrchr(test, search_char);

//     printf("検索文字は%c\n検索文字が指す最後の場所は'%p'です\n", *result, result);

//     return 0;
// }