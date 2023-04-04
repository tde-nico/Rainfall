#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	ptr[132];
	FILE	*f;

	f = fopen("/home/user/end/.pass", "r");
	memset(ptr, 0, 33);
	if (!f || argc != 2)
		return (-1);
	fread(ptr, 1, 66, f);
	ptr[65] = 0;
	ptr[atoi(argv[1])] = 0;
	fread(&ptr[66], 1, 65, f);
	fclose(f);
	if (!strcmp(ptr, argv[1]))
		execl("/bin/sh", "sh", 0);
	else
		puts(&ptr[66]);
	return (0);
}
