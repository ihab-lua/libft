/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:00:37 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/14 22:59:34 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*p;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	total = nmemb * size;
	p = malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}
