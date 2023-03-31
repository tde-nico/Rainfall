#include <stdio.h>
#include <stdlib.h>

char	m = 0;

void	v()
{
	char	buf[512];

	fgets(buf, 512, stdin);
	printf(buf);
	if (m == 0x40) // 0x40 = 64 = @
	{
		fwrite("Wait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
}

int	main()
{
	v();
	return (0);
}
