#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize){
    size_t	len_dst;
	size_t	len_src;
    size_t i;
    i = 0;

    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);

    if (dstsize <= len_dst)
		return (len_dst + len_src);
    
    if (dstsize)
    {
        while(src[i] && len_dst + i + 1 < dstsize){
            dst[len_dst + i] = src[i];
            i++;
        }
    }
    dst[len_dst + i] = '\0';

    return (len_dst + len_src);
}

// int main(void){
//     char dst[7] = "hello";
//     char src[] = "world";
//     size_t length;

//     length = ft_strlcat(dst, src, sizeof(dst));

//     printf("return値：%zu文字です。\n", length);
//     printf("連結後の文字列：%s\n", dst);
//     return 0;
// }