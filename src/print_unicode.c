/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unicode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 21:07:17 by telain            #+#    #+#             */
/*   Updated: 2017/04/30 21:18:27 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		get_weight(int c)
{
	ft_putendl(ft_itoa_base(c, 2));
	return (0);
}

void			print_unicode(int c)
{
	int		size;

	size = get_weight(c);
}
