#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	c[68];

struct	s
{
	int	n;
	int	*p;
};

void	m()
{
	printf("%s - %d\n", c, time(0));
}

int	main(int argc, char **argv)
{
	struct s	*s1;
	struct s	*s2;
	FILE		*f;

	s1 = malloc(8);
	s1->n = 1;
	s1->p = malloc(8);

	s2 = malloc(8);
	s2->n = 2;
	s2->p = malloc(8);

	strcpy(s1->p, argv[1]);
	strcpy(s2->p, argv[2]);

	f = fopen("/home/user/level8/.pass", "r");
	fgets(c, 68, f);

	puts("~~");
	return (0);
}
