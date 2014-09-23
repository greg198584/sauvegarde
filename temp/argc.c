#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	
	//c = 48 + argc - 1;
	write(1, argc + '0', 1);
}
