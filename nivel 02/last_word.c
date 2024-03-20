#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*s1;
	int		i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	s1 = argv[1];
	while (s1[i])
		i++;//para llegar al final del string
	i--;//para ponernos justo antes del nulo
	while (s1[i] > 32) //para que sea caracter imprimible
		i--; //retrocede hasta encontrar el primer espacio en blanco
	i++;//avanzamos uno para ponernos al principio de la última palabra
	while (s1[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}