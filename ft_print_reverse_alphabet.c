/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmajedaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 23:45:53 by nmajedaa          #+#    #+#             */
/*   Updated: 2017/08/09 23:46:11 by nmajedaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude <unistd.h>

int     ft_putchar(char c)
{
	            write(1, &c, 1);
				                        return (0);
}

void    ft_print_reverse_alphabet(void)
{
	            char ch;
				
				                        ch = 'z';
										                                        while (ch >= 'a')
																					                                                                    {
																																							                                                                                                            ft_putchar(ch);
																																																																		                                                                                                                                                        ch--;
																																																																																																								
																																																																																																								     }
}

int     main()
{
	            ft_print_reverse_alphabet();
				                        return (0);
}n
