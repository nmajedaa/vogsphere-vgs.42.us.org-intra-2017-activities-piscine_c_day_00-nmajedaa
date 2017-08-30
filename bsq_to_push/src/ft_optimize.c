/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmajedaa <nmajedaa@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 16:33:29 by nmajedaa          #+#    #+#             */
/*   Updated: 2017/08/29 16:53:55 by nmajedaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_bigger_sqr(char *str, int position[2], t_instr *info, int size)
{
	int		x;
	int		y;
	int		start;

	x = size - 1;
	y = 0;
	start = info->length + position[0] + (position[1]) * (info->width + 1);
	if (position[0] + size > info->width)
		return (0);
	else if (position[1] + size > info->height)
		return (0);
	while (y < size - 1)
		if (str[start + x + y * (info->width + 1)] == info->empty)
			y++;
		else
			return (0);
	x = 0;
	while (x < size)
		if (str[start + x + y * (info->width + 1)] == info->empty)
			x++;
		else
			return (0);
	return (1);
}
