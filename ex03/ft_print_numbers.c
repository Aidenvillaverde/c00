/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:30:49 by avillave          #+#    #+#             */
/*   Updated: 2023/06/08 18:09:14 by avillave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}
	
void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x <= 58)
	{
		ft_putchar(x);
		x++;
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}
