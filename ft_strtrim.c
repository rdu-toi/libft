/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:19:20 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/05/25 11:19:22 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*str = NULL;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		l++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			k++;
		else if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			j = j + k;
			k = 0;
			j++;
		}
		i++;
	}
	i = 0;
	//str = (char *)malloc(sizeof) * (j + 1);
	while (l < (j + l))
		str[i++] = s[l++];
	return (str);
}

int		main(void)
{
	printf("%s\n", ft_strtrim(" hello	s  "));
}