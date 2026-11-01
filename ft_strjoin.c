/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:53:14 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/18 13:57:04 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	idx;
	size_t	idx2;
	size_t	ttl;
	char	*cpy;

	if (!s1 || !s2)
		return (NULL);
	ttl = ft_strlen(s1) + ft_strlen(s2) + 1;
	cpy = malloc(ttl);
	if (!cpy)
		return (NULL);
	idx = 0;
	while (s1[idx])
	{
		cpy[idx] = s1[idx];
		idx++;
	}
	idx2 = 0;
	while (s2[idx2])
		cpy[idx++] = s2[idx2++];
	cpy[idx] = '\0';
	return (cpy);
}
