/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 21:17:44 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/05/22 21:17:45 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	len;
// 	size_t	i;

// 	i = 0;
// 	len = ft_strlen(dest);
// 	while (src[i])
// 	{
// 		dest[len + i] = src[i];
// 		i++;
// 	}
// 	dest[len + i] = '\0';
// 	return (dest);
// }

int		main(int ac, char *av[])
{
	if (ac == 3)
	{
		// printf("%lu\n", ft_strlcat(av[1], av[2], 1));
		printf("%lu\n", strlcat(av[1], av[2], 6));
	}
	return (0);
}