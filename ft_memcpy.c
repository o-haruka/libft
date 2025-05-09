#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n){
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;

    // これ必要？？
    // if (dst == NULL && src == NULL)
	// 	return (NULL);

    while (n--)
    {
        *d++ = *s++;
    }

    return dst;
}

// int main() {
//     char dest[10];
//     char src[] = "Hello";
    
//     // 自作memcpyでコピー
//     ft_memcpy(dest, src, 6); // "Hello" + 終端NULLをコピー
//     printf("Copied: %s\n", dest); // 出力: Copied: Hello
    
//     // 構造体のコピー例
//     struct { int x; char c; } s1 = {42, 'A'}, s2;
//     ft_memcpy(&s2, &s1, sizeof(s1));
//     printf("Struct: x=%d, c=%c\n", s2.x, s2.c); // 出力: Struct: x=42, c=A
    
//     return 0;
// }