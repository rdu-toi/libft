#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *d;

	d = (unsigned char *)s;
	while (n--)
		*d++ = (unsigned char)c;
	return (s);
}

int		main(void)
{
	printf("%s\n", ft_memset("hello", 'c', 3));
	printf("%s\n", memset("hello", 'c', 3));
}