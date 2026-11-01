/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:45:09 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/18 14:06:21 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	int		i;
	char	*alc;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	alc = malloc(len + 1);
	if (!alc)
		return (NULL);
	i = 0;
	while (s[i])
	{
		alc[i] = f(i, s[i]);
		i++;
	}
	alc[i] = '\0';
	return (alc);
}
