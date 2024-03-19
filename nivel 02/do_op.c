#include <unistd.h>
#include <stdio.h>
#include <libc.h>

int	main(int argc, char *argv[])
{
	int		operator1;
	char	operation;
	int		operator2;
	int		result;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	operator1 = atoi(argv[1]);//para convertirlos en int
	operation = argv[2][0];//para señalar cuál es la operación
	operator2 = atoi(argv[3]);
	result = 0;
	if (operation == '+')
	{
		result = operator1 + operator2;
	}
	else if (operation == '-')
	{
		result = operator1 - operator2;
	}
	else if (operation == '*')
	{
		result = operator1 * operator2;
	}
	else if (operation == '/')
	{
		result = operator1 / operator2;
	}
	printf("%i", result);
	return (0);
}