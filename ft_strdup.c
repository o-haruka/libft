#include "libft.h"

char *ft_strdup(const char *s1){
    char *cpy;
    size_t len;

    // "+1" for NUL terminating
    len = ft_strlen(s1) + 1;

    cpy = (char *)malloc(sizeof(char) * (len));

    // 入力文字列 s が NULL の場合の動作は未定義（多くの実装でセグメンテーション違反）。
    if (!cpy)
        return (NULL);

    ft_strlcpy(cpy, s1, len);

    return (cpy);
}

// int main(void) {
//     char str[] = "hello";
//     char *cpy = ft_strdup(str);
//     printf("コピー前：　%s\n", str);
//     printf("コピー後：　%s\n", cpy);
//     free(cpy);
//     return 0;
// }