#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	language = 0;

void	greetuser(char *src)
{
	char	dest[64];
	char	*str;

	if (language == 1)
		dest = "\x48\x79\x76\xC3\xA4\xC3\xA4\x20\x70\xC3\xA4\x69\x76\xC3\xA4\xC3\xA4\x20\x00";
	else if (language == 2)
		strcpy(dest, "Goedemiddag! ");
	else if (language == 0)
		strcpy(dest, "Hello ");
	strcat(dest, src);
	puts(dest);
}

int	main(int argc, char **argv, char **envp)
{
	char dest[72];
	char *lang;

	if ( argc != 3 )
		return 1;
	memset(dest, 0, 19);
	strncpy(dest, argv[1], 40);
	strncpy(&dest[40], argv[2], 32);
	lang = getenv("LANG");
	if (lang)
	{
		if (!memcmp(lang, "fi", 2))
			language = 1;
		else if (!memcmp(lang, "nl", 2))
			language = 2;
	}
	greetuser(dest);
}



