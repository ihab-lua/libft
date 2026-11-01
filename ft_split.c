/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:22:06 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/21 19:14:55 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*duplicate(const char *s, char c)
{
	int		i;
	int		len;
	char	*dup;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static char	**free_split(char **spl, int j)
{
	while (j > 0)
		free(spl[--j]);
	free(spl);
	return (NULL);
}

static char	**fill_split(char **spl, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			spl[j] = duplicate(&s[i], c);
			if (!spl[j])
				return (free_split(spl, j));
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	spl[j] = NULL;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;

	if (!s)
		return (NULL);
	spl = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!spl)
		return (NULL);
	return (fill_split(spl, s, c));
}
