#include "libft.h"

int ft_isdigit(int c){
    return ('0' <= c && c <= '9');
}

// int main(void) {
//     char test[] = "12uryr";

//     int i;
//     i = 0;

//     while(test[i] != '\0'){
//         if(ft_isdigit(test[i])){
//             printf("%c ○　数字です。\n", test[i]);
//         }else{
//             printf("%c ×　数字ではありません。\n", test[i]);
//         }
//         i++;
//     }

//     return 0;
// }