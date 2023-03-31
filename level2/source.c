#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*p()
{
	char	buf[64];
	void	*res;

	fflush(stdout);
	gets(buf);
	// https://stackoverflow.com/questions/1693011/how-can-i-determine-the-return-address-on-stack
	res = __builtin_return_address(0);
	if (((unsigned int)res & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", res);
		exit(1);
	}
	puts(buf);
	return (strdup(buf));
}

int	main()
{
	p();
	return (0);
}