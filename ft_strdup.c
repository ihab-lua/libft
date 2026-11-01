/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:41:45 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/31 18:20:22 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	total;
	size_t	i;
	char	*pt;

	total = ft_strlen(s) + 1;
	pt = malloc(total * sizeof(char));
	if (!pt)
		return (NULL);
	i = 0;
	while (s[i])
	{
		pt[i] = s[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}

