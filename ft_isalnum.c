#include "libft.h"

int ft_isalnum(int c){
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || ('0' <= c && c <= '9'));
}
