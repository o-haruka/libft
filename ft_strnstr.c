#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    i = 0;
    size_t j;

    // needle が空文字列なら haystack を返す
    if (*needle == '\0')
        return (char *)haystack;

    // haystack を先頭から最大 len まで見る
    while (i < len && haystack[i] != '\0') {
        j = 0;
        // haystack[i + j] と needle[j] が一致するかチェック
        while (i + j < len && haystack[i + j] == needle[j]) {
            j++;
            // needle の終端（全部一致）までいったらマッチ
            if (needle[j] == '\0') {
                return (char *)(haystack + i);
            }
        }
        i++;
    }

    // 見つからなかったら NULL
    return NULL;
}

// int main() {
//     const char *text = "hello world";
//     const char *search = "world";

//     char *result = ft_strnstr(text, search, 11);

//     if (result != NULL) {
//         printf("このアドレス\"%p\"に見つかりました: %s\n", result, result);
//     } else {
//         printf("見つかりませんでした\n");
//     }

//     return 0;
// }