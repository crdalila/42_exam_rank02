#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = argv[1];
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - (str[i] - 'a'); //para calcular el opuesto alfabético
			/*Se le resta a str[i] el valor de 'a' para saber su posición en el
			alfabeto. Por ejemplo 'c' - 'a' = 2
			Para sacar su contrario, haríamos z - (c - a) = z - 2 = x */
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - (str[i] - 'A');
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}