/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 14:25:50 by telain            #+#    #+#             */
/*   Updated: 2017/04/30 21:15:16 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define FT_ABS(X) (X < 0 ? X : -X)

char		get_ascii(int c)
{
	c = FT_ABS(c);
	if (c <= 9)
		return (c + '0');
	return (c - 10 + 'A');
}

char		*ft_itoa_base(int value, int base)
{
	int		i;
	int		sign;
	char	*s;

	sign = value < 0 ? -1 : 1;
	if (value == 0)
		return ("0\0");
	i = 32;
	s = (char*)malloc(sizeof(char) * 34);
	s[33] = 0;
	while (value)
	{
		s[i--] = get_ascii(value & base);
		value -= value % base;
	}
	if (sign == -1 && base == 10)
		s[i] = '-';
	else
		i++;
	s += i;
	return (s);
}
