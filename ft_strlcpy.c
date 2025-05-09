#include "libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize){
    size_t i;
    i = 0;
    if (dstsize)
    {
        while(src[i] != '\0' && i < (dstsize - 1)){
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}

// int main(void){
//     char dst[10];
//     char src[] = "Hello";
//     size_t len;
//     len = ft_strlcpy(dst, src, sizeof(dst));
    
//     printf("コピー元の文字列の長さ：%zu\n", len);
//     printf("コピーされた文字：%s\n", dst);

//     return 0;
// }