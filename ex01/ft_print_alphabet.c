/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:57:26 by avillave          #+#    #+#             */
/*   Updated: 2023/06/08 17:57:33 by avillave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void) 
{
	char letra = 'a';

	while (letra <= 'z') 
	{	
		write(1, &letra, 1);
		letra++;
	}
	write(1, "/n", 1)
}

int main()
{
	ft_print_alphabet();
	resturn (0);
}
