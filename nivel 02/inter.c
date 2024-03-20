#include <unistd.h>

int	main (int argc, char *argv[])
{
	char *s1;
	char *s2;
	int	i;
	int j;
	char ascii_table[256] = {};

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];
	i = 0;
	while (s1[i])
	{
		j = 0; //inicializarlo al inicio del bucle porque sino solo lee una letra
		while (s2[j])
		{//el ascii_table es para saber si el caracter ya ha sido encontrado antes
			if (s1[i] == s2[j] && !ascii_table[(int)s2[j]])
			{//tiene que ser un int, así que se hace un casteo
				ascii_table[(int)s2[j]] = 1;
				write(1, &s1[i], 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}