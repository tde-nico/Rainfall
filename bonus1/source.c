#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	dest[40];
	int		arg;

	arg = atoi(argv[1]);
	if (arg > 9)
		return (1);
	memcpy(dest, argv[2], 4 * arg);
	if (arg == 1464814662)  // 0x574F4C46
		execl("/bin/sh", "sh", 0);
	return (0);
}
