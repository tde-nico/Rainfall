#include <stdlib.h>
#include <stdio.h>

char	m = 0;

void	p(char *str)
{
	printf(str);
}

void	n()
{
	char	buf[520];

	fgets(buf, 512, stdin);
	p(buf);
	if (m == 0x1025544) // 0x1025544 = 16930116
	{
		system("/bin/cat /home/user/level5/.pass");
	}
}

int	main()
{
	n();
	return (0);
}
