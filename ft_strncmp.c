#include "libft.h"
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t i;
    i = 0;

    const unsigned char *c1;
    const unsigned char *c2;

    c1 = (const unsigned char *)s1;
    c2 = (const unsigned char *)s2;

    while(i < n && (*c1 || *c2)){
        if(*c1 != *c2)
            return (*c1 - *c2);
        i++;
        c1++;
        c2++;
    }

    return 0;
}

// int main(void) {
//     char test1[] = "abc";
//     char test2[] = "xyz";
//     char test3[] = "abc";
//     char test4[] = "acc";

//     //n = 0のとき
//     printf("%d\n", ft_strncmp(test1, test2, 0)); // 0 そもそも比較されないから0

//     //全て同じ文字
//     printf("%d\n", ft_strncmp(test1, test3, 8)); // 0 

//     //違いあり
//     printf("%d\n", ft_strncmp(test1, test4, 5)); // マイナスの値 b<cのため

//     printf("test1: %s\n", test1);
//     printf("test3: %s\n", test3);
//     return 0;
// }