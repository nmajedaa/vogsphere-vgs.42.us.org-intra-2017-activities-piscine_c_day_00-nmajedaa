ilphabet(void){
	    char alphabetletters1{a, b, c, d, e, f, g, h, i, j, k, l, m};
		    char alphabetletters2{n, o, p, q, r, s, t, u, v, w, x, y, z};
			    ft_putchar(char alphabetletters1, char alphabetletters2);
}
int main(){
	    ft_print_alphabet();
		    int end();

}
* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmajedaa <nmajedaa@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:35:35 by nmajedaa          #+#    #+#             */
/*   Updated: 2017/08/09 16:49:14 by nmajedaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


