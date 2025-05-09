#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len){
    unsigned char		*d;
	const unsigned char	*s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;

    if (dst == NULL && src == NULL)
		return (NULL);

    if(s<d && d < s + len){
        while(len--)
            d[len] = s[len];
    }else{
        while (len--)
            *d++ = *s++;
    }
    return dst;
}

// int main(void) {
//     // テスト1：通常の非重複コピー（前方向）
//     char buffer1[20] = "abcdefg";
//     ft_memmove(buffer1 + 5, buffer1, 3);  // 'a','b','c' → 5,6,7に
//     printf("Test1: %s\n", buffer1);      // 期待: abcde abcg

//     // テスト2：重複あり（後ろにずらす → 後ろからコピー）
//     char buffer2[20] = "abcdefg";
//     ft_memmove(buffer2 + 2, buffer2, 5);  // overlapあり
//     printf("Test2: %s\n", buffer2);      // 期待: ababcdef

//     // テスト3：重複あり（前にずらす → 前からコピー）
//     // char buffer3[20] = "abcdefg";
//     // ft_memmove(buffer3, buffer3 + 2, 5);  // overlapあり
//     // printf("Test3: %s\n", buffer3);      // 期待: cdefggg

//     // テスト4：完全に同じ場所 → 何も起きない
//     char buffer4[20] = "abcdefg";
//     ft_memmove(buffer4, buffer4, 7);
//     printf("Test4: %s\n", buffer4);      // 期待: abcdefg

//     // テスト5：空のコピー（n = 0）
//     char buffer5[20] = "abcdefg";
//     ft_memmove(buffer5 + 2, buffer5, 0);
//     printf("Test5: %s\n", buffer5);      // 期待: abcdefg

//     return 0;
// }