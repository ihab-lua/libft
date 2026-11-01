/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:28:29 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/19 11:35:36 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ds;
	const unsigned char	*sr;
	size_t				i;

	ds = (unsigned char *)(dest);
	sr = (const unsigned char *)(src);
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
