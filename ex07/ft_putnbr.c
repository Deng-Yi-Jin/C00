/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:20:07 by djin              #+#    #+#             */
/*   Updated: 2023/04/13 10:04:13 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	loop(int *nb, char *c, char *a, long *i)
{
	while (*nb != 0)
	{
		*c = *nb % 10 + 48;
		a[*i] = *c;
		(*i)++;
		*nb = *nb / 10;
	}
	while (*i > 0)
	{
		(*i)--;
		write(1, &a[*i], 1);
	}
}

void	ft_putnbr(int nb)
{
	char	c;
	char	a[50];
	long	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	loop(&nb, &c, a, &i);
}

int	main(void)
{
	ft_putnbr(2147483647);
}
