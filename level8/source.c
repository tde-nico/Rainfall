#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//0x8049ab0 <service>:	 ""
//0x8049aac <auth>:		""
//0x8048810:	   "%p, %p \n"
//0x8048819:	   "auth "
//0x804881f:	   "reset"
//0x804882d:	   "login"
//0x8048833:	   "/bin/sh"
//0x804883b:	   "Password:\n"
//0x8049a80:		sdin

typedef struct	s_auth
{
	char	s[32]; // 0x20
	int		n;
}	t_auth;

char	*service;
t_auth	*auth;

int	main()
{
	char	buf[128]; // 0xa0 - 0x20 = 0x80

	while (1)
	{
		printf("%p, %p \n", auth, service);
		if (!fgets(buf, 128, stdin))
			break ;
		if (!strncmp("auth ", buf, 5))
		{
			auth = malloc(4);
			*auth = 0x00000000;
			if (strlen(buf + 5) < 31)
				strcpy(auth->s, buf + 5);
		}
		if (!strncmp(buf, "reset", 5))
			free(auth);
		if (!strncmp(buf, "service", 6))
			service = strdup(buf + 7);
		if (!strncmp(buf, "login", 5))
		{
			if (auth->n)
				system("/bin/sh");
			else
				fwrite("Password:\n", 1, 10, stdout);
		}
	}
	return (0);
}
