#include <stdio.h>

int	main(void)
{
	const char str[] = "Ritupon Baishya from Guwahati Assam India #%ld\n";
	size_t	i = 0;

	while (1)
		printf(str, i++);
	return (0);
}
