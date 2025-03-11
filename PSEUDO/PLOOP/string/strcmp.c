#include <string.h>
#include <stdio.h>
int	main(void)
{
	char error[] = "Hmm.... not equal";
	char wow[] = "It is equal";
	char s[] = "meow";
	char b[] = "meo1";

	if (strcmp(s, b) != 0)
	{
		printf("%s", error);
	}
	else
		printf("%s", wow);
	return (0);
}
