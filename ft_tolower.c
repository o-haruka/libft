#include "libft.h"

int ft_tolower(int c){
    if('A' <= c && c <= 'Z'){
        return (c+32);
    }else{
        return c;
    }
}

// int main(void)
// {
//     char c1 = 'A';              // char 型
//     unsigned char c2 = 'B';     // unsigned char 型
//     int c3 = 'C';               // int 型（文字リテラル）
//     int c4 = 65;                // int 型（ASCII値）
//     int c5 = 'a';               // 小文字（変換されない）
//     int c6 = '1';               // 数字（変換されない）
//     int eof = EOF;              // EOF（通常 -1）

//     printf("【入力】 'A' (char), \t\t値: %d, 【出力】 %d (%c)\n", c1, ft_tolower(c1), ft_tolower(c1));
//     printf("【入力】 'B' (unsigned char), \t値: %d, 【出力】 %d (%c)\n", c2, ft_tolower(c2), ft_tolower(c2));
//     printf("【入力】 'C' (int), \t\t値: %d, 【出力】 %d (%c)\n", c3, ft_tolower(c3), ft_tolower(c3));
//     printf("【入力】 65 (int), \t\t値: %d, 【出力】 %d (%c)\n", c4, ft_tolower(c4), ft_tolower(c4));
//     printf("【入力】 'a' (int), \t\t値: %d, 【出力】 %d (%c)\n", c5, ft_tolower(c5), ft_tolower(c5));
//     printf("【入力】 '1' (int), \t\t値: %d, 【出力】 %d (%c)\n", c6, ft_tolower(c6), ft_tolower(c6));
//     printf("【入力】 EOF (int), \t\t値: %d, 【出力】 %d\n", eof, ft_tolower(eof));

//     return 0;
// }