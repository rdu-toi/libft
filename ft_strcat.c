#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}

int		main(void)
{
	char	dest[] = "hello";
	char	src[] = "world";
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest, src));
}