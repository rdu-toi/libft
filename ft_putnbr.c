/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 06:39:09 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/05/24 06:39:10 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	nbr;
	char	num;
	int		flag;
	int		len;

	nbr = n;
	flag = 0;
	len = ft_nbrlen((int)nbr);
	len--;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
		flag = 1;
	}
	if (nbr < 10)
	{
		num = nbr + '0';
		ft_putchar(num);
	}
	if (nbr == 0)
		ft_putchar(nbr);
	if (nbr >= 10)
	{
		while (len-- > flag)
		{
			num = (nbr % 10) + '0';
			ft_putchar(num);
			nbr /= 10;
		}
	}
}