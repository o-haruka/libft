#include "libft.h"

int ft_isprint(int c){
    return (32 <= c && c <= 126);
}

// int main(void){
//     char test[] = "1\nuryr";

//     int i;
//     i = 0;

//     while (test[i]!='\0')
//     {
//         if(ft_isprint(test[i])){
//             printf("%c ○　printableです。\n", test[i]);
//         }else{
//             printf("%c ×　printableではありません。\n", test[i]);
//         }
//         i++;
//     }
//     return 0;
// }