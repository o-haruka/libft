/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscode <vscode@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:46:50 by vscode            #+#    #+#             */
/*   Updated: 2025/05/09 19:47:26 by vscode           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(s1) + 1;
	cpy = (char *)malloc(sizeof(char) * (len));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, len);
	return (cpy);
}
