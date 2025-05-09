#include "libft.h"

static size_t ft_count_words(const char *s, char c) {
    size_t count = 0;
    while (*s) {
        while (*s == c)
            s++;
        if (*s) {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return count;
}

static char *ft_copy_word(const char *s, size_t len) {
    char *word = (char *)malloc(len + 1);
    if (!word)
        return NULL;
    ft_memcpy(word, s, len);
    word[len] = '\0';
    return word;
}

static void ft_free_array(char **array, size_t i) {
    while (i > 0)
        free(array[--i]);
    free(array);
}

char **ft_split(char const *s, char c) {
    if (!s)
        return NULL;

    size_t word_count = ft_count_words(s, c);
    char **result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return NULL;

    size_t i = 0;
    while (i < word_count) {
        while (*s == c)
            s++;
        size_t len = 0;
        while (s[len] && s[len] != c)
            len++;
        result[i] = ft_copy_word(s, len);
        if (!result[i]) {
            ft_free_array(result, i);
            return NULL;
        }
        s += len;
        i++;
    }
    result[i] = NULL;
    return result;
}