#include <unistd.h>
#include <cstring>


class N
{
public:
	int		n;
	int		*p;
	char	s[100];

	N(int n)
	{
		this->n = n;
		this->p = &N::operator+;
	}

	void	setAnnotation(cahr *s)
	{
		memcpy(this->s, s, strlen(s));
	}

	int	operator+(N &n)
	{
		return (this->n + n.n);
	}

	int	operator-(N &n)
	{
		return (this->n - n.n);
	}
}


int	main(int argc, char **argv)
{
	N	*a;
	N	*b;
	N	*c;

	if ( argc <= 1 )
		_exit(1);
	a = new N(5);
	b = a;
	c = new N(6);
	b->setAnnotation(argv[1]);
	return ((c->*(c->p))(*b));
}
