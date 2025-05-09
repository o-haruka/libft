/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:39:44 by vscode            #+#    #+#             */
/*   Updated: 2025/05/10 02:24:51 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static size_t	ft_count_words(const char *s, char c)
// {
// 	size_t	count;

// 	count = 0;
// 	while (*s)
// 	{
// 		while (*s == c)
// 			s++;
// 		if (*s)
// 		{
// 			count++;
// 			while (*s && *s != c)
// 				s++;
// 		}
// 	}
// 	return (count);
// }

// static char	*ft_copy_word(const char *s, size_t len)
// {
// 	char	*word;

// 	word = (char *)malloc(len + 1);
// 	if (!word)
// 		return (NULL);
// 	ft_memcpy(word, s, len);
// 	word[len] = '\0';
// 	return (word);
// }

// static void	ft_free_array(char **array, size_t i)
// {
// 	while (i > 0)
// 		free(array[--i]);
// 	free(array);
// }

// static const char	*ft_next_word(const char *s, char c, size_t *len)
// {
// *len = 0;
// 	while (*s == c)
// 		s++;
// 	while (s[*len] && s[*len] != c)
// 		(*len)++;
// 	return (s);
// }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	word_count;
// 	char	**result;
// 	size_t	i;
// 	size_t	len;

// 	if (!s)
// 		return (NULL);
// 	word_count = ft_count_words(s, c);
// 	result = (char **)malloc(sizeof(char *) * (word_count + 1));
// 	if (!result)
// 		return (NULL);
// 	i = 0;
// 	while (i < word_count)
// 	{
// 		s = ft_next_word(s, c, &len);
// 		result[i] = ft_copy_word(s, len);
// 		if (!result[i])
// 		{
// 			ft_free_array(result, i);
// 			return (NULL);
// 		}
// 		s += len;
// 		i++;
// 	}
// 	result[i] = NULL;
// 	return (result);
// }

#include "libft.h"

// 単語数カウント
// 長さ測る
// 複製

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*copy_word(const char *s, size_t len)
{
	char	*word;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

static void	free_array(char **array, size_t i)
{
	while (i--)
		free(array[i]);
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char *)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		result[i] = copy_word(s, len);
		if (!result[i])
		{
			free_array(result, i);
			return (NULL);
		}
		i++;
		s += len;
	}
	result[i] = NULL;
	return (result);
}
