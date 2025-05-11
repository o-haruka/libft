/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harukaomura <harukaomura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:49:48 by vscode            #+#    #+#             */
/*   Updated: 2025/05/11 19:41:23 by harukaomura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (count == 0 || size == 0)
		return (NULL);
	if (size > SIZE_MAX / count)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
