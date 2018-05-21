#include "libft.h"
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (src[i] != '\0' && --n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	printf("%s\n", ft_strncpy("world", "hello", 1));
}