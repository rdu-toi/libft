/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:44:27 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/05/23 06:44:29 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;

	i = 0;
	while (n--)
	{
		((char *)&dst)[i] = ((const char *)&src)[i];
		i++;
	}
	return (dst);
}

int		main(int ac, char *av[])
{
	if (ac == 3)
	{
		printf("%s\n", ft_memcpy(av[1], av[2], 5));
		printf("%s\n", memcpy(av[1], av[2], 5));
	}
	return (0);
}