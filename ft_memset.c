#include "libft.h"

void *ft_memset(void *b, int c, size_t len){
    unsigned char *p = (unsigned char *)b;
    unsigned char value;
    value = (unsigned char)c;

    while(0 < len){
        *p = value;
        p++;
        len--;
    }

    return b;
}

// int main(void) {
//     char buffer[10];
    
//     // バッファを 'A' で埋める
//     ft_memset(buffer, 'A', sizeof(buffer));
    
//     // 結果を表示
//     printf("バッファの内容: ");
//     for (int i = 0; i < 10; i++) {
//         printf("%c ", buffer[i]);
//     }
//     printf("\n");
    
//     // バッファを 'A' で埋め、戻り値の確認
//     void *ptr = ft_memset(buffer, 'B', 5);
//     printf("戻り値ポインタ: %p, 元のポインタ: %p\n", ptr, (void *)buffer);

//     return 0;
// }