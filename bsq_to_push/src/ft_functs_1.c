/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functs_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmajedaa <nmajedaa@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 16:34:41 by nmajedaa          #+#    #+#             */
/*   Updated: 2017/08/29 16:53:11 by nmajedaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
}

void	ft_put_result(char *str, int start)
{
	int		i;

	i = 0;
	while (str[start + i])
		i++;
	write(1, &str[start], i);
}
