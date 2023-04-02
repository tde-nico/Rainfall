#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct	f
{
	void	(*f)();
};

void	n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void	m()
{
	puts("Nope");
}

int	main(int argc, char **argv)
{
	struct f	*f;
	char		*a;

	a = malloc(64);
	f = malloc(4);
	f->f = m;

	strcpy(a, argv[1]);
	f->f();
	return (0);
}
