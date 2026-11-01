/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:44:16 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/13 11:57:51 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss;
	size_t				i;

	ss = (const unsigned char *)(s);
	i = 0;
	while (i < n)
	{
		if (ss[i] == (unsigned char)(c))
			return ((void *)(&ss[i]));
		i++;
	}
	return (NULL);
}
