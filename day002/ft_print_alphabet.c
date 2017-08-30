# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_alphabet,c                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmajedaa <nmajedaa@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 20:58:36 by nmajedaa          #+#    #+#              #
#    Updated: 2017/08/09 20:59:18 by nmajedaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

int     ft_putchar(char c)
{
	    write(1, &c, 1);
		    return (0);
}

void    ft_print_alphabet(void)
{
	    char ch;

		    ch = 'a';
			    while (ch <= 'z')
					    {
							        ft_putchar(ch);
									        ch++;
											    }
}

int     main()
{
	    ft_print_alphabet();
		    return (0);
}
