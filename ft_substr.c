/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:41:39 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/18 13:56:22 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*pt;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		pt = malloc(1);
		if (!pt)
			return (NULL);
		pt[0] = '\0';
		return (pt);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	pt = malloc(len + 1);
	if (!pt)
		return (NULL);
	i = 0;
	while (i < len)
		pt[i++] = s[start++];
	pt[i] = '\0';
	return (pt);
}
