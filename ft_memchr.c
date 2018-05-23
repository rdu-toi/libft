/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:52:00 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/05/23 12:52:01 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	d;

	i = 0;
	d = (char)c;
	while (((unsigned char *)&s)[i] != '\0' && n--)
	{
		if (((unsigned char *)&s)[i] == d)
			return (((unsigned char *)&s)[i]);
		i++;
	}
	if (((unsigned char *)&s)[i] == d)
		return (((unsigned char *)&s)[i]);
	return (0);
}

int		main(void)
{
	printf("%s\n", ft_memchr("hello", 'h', 5));
	printf("%s\n", memchr("hello", 'h', 5));
}