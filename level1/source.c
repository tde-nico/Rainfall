#include <stdlib.h>
#include <stdio.h>

void	run()
{
	fwrite("Good... Wait what?\n", 1, 19, stdout);
	system("/bin/sh");
}

int	main()
{
	char	buf[64];

	gets(buf);
	return (0);
}
