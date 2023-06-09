/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:48:47 by djin              #+#    #+#             */
/*   Updated: 2023/03/31 11:03:49 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_a(int i)
{
	char	c;

	c = (i / 10) + 48;
	write(1, &c, 1);
	c = i % 10 + 48;
	write(1, &c, 1);
	c++;
	return ;
}

void	ft_print_comb2(void)
{
	int	a[2];

	a[0] = 0;
	while (a[0] < 99)
	{
		a[1] = a[0] + 1;
		while (a[1] < 100)
		{
			if (a[1] > a[0])
				write_a(a[0]);
			write(1, " ", 1);
			write_a(a[1]);
			if (a[0] != 98)
				write(1, ", ", 2);
			a[1]++;
		}
		a[0]++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
