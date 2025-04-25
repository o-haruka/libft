#include <stdio.h>
#include <string.h>

size_t	st_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

int	main(void)
{
	char str[] = "hello";

	printf("%zu文字です。", st_strlen(str));
	return (0);
}