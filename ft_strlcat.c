/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:32:53 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/12 18:44:13 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	while (j < dstsize && dst[j])
		j++;
	dst_len = j;
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	while (src[i] && j + 1 < dstsize)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dst_len + ft_strlen(src));
}
