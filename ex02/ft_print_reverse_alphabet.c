/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:11:54 by avillave          #+#    #+#             */
/*   Updated: 2023/06/08 16:56:43 by avillave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

	 void ft_print_reverse_alphabet(void)
{
		 char letra = 'z';

			 while (letra >= 'a' )	{
				write(1, &letra, 1);
		}
		write(1, '\n', 1)
}

	int main()
{
	ft_print_reverse_alphabet();
	retur(0);
}
