/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:29:56 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/05/24 12:29:57 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**ft_strsplit(char const *str, char c)
{
	unsigned char **dst;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != c)
			j++;
		i++;
	}
	i = 0;
	*dst = ((unsigned char **)malloc(sizeof) * j);
	j = 0;
	while (str[i])
	{
		while (*dst[j] != '\0')
		{
			while ()
		}
	}
}