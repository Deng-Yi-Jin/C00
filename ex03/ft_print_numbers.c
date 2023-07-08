/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:31:18 by djin              #+#    #+#             */
/*   Updated: 2023/03/31 11:02:07 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	p;

	p = '0';
	while (p <= '9')
	{	
		write(1, &p, 1);
		p++ ;
	}
}

int	main(void)
{
	ft_print_numbers();
}
