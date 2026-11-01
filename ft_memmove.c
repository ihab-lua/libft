/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:35:35 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/12 15:59:57 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ds;
	unsigned const char	*sr;
	size_t				i;

	ds = (unsigned char *)(dest);
	sr = (unsigned const char *)(src);
	i = 0;
	if (ds == sr || n == 0)
		return (dest);
	if (ds < sr)
	{
		while (i < n)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	else
	{
		while (n--)
			ds[n] = sr[n];
	}
	return (dest);
}
