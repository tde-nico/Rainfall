#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	p(char *dest, char *s)
{
	char	buf[4104];

	puts(s);
	read(0, buf, 4096);
	*strchr(buf, '\n') = 0;
	strncpy(dest, buf, 20);
}

void	pp(char *dest)
{
	char	src[20];
	char	tmp[28];

	p(src, " - ");
	p(tmp, " - ");
	strcpy(dest, src);
	strcat(dest, " ");
	strcat(dest, tmp);
}

int	main(void)
{
	char	s[42];

	pp(s);
	puts(s);
	return (0);
}

