/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:45:33 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/13 11:00:45 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (1)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last = (char *)s;
		if ((unsigned char)*s == '\0')
			break ;
		s++;
	}
	return (last);
}
