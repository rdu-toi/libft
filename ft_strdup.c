#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;

	i = 0;
	while (s[i] != '\0')
		i++;
	d = (char*)malloc(sizeof(*s) * i);
	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}