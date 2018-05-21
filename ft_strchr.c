#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	dest[] = "hello";
	int		s;

	s = 's';
	printf("%s\n", strchr("hello", 's'));
}