/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:20:47 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/25 11:13:17 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_convert(const char *s, int sign)
{
	long	res;
	int		digit;

	res = 0;
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (sign == 1 && res > (LONG_MAX - digit) / 10)
			return (LONG_MAX);
		if (sign == -1 && res < (LONG_MIN + digit) / 10)
			return (LONG_MIN);
		res = res * 10 + digit * sign;
		s++;
	}
	return (res);
}

int	ft_atoi(const char *nptr)
{
	int	sign;

	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	return ((int)ft_convert(nptr, sign));
}
