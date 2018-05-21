#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	//int		k;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i++)
	{
		if (haystack[i] == needle[j])
			break;
	}
	j++;
	while (haystack[i] != '\0')
	{
		if (haystack[i] != needle[j] && needle[j] != '\0')
			break;
		if (needle[j] == '\0')
			return (haystack);
	}
	return (NULL);
}

int		main(void)
{
	printf("%s\n", ft_strstr("hello", "el"));
	printf("%s\n", strstr("hello", "el"));
}