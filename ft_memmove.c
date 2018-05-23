/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:10:41 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/05/23 12:10:42 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	i = 0;
	while (((char *)&src)[i] && len--)
	{
		((char *)&dst)[i] = ((char *)&src)[i];
		i++;
	}
	while (len--)
		((char *)&dst)[i++] = '\0';
	return ((char *)dst);
}

int		main(int ac, char *av[])
{
	if (ac == 3)
	{
		printf("%s\n", ft_memmove(av[1], av[2], 1));
		printf("%s\n", memmove(av[1], av[2], 1));
	}
	return (0);
}