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
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32; //para escribirlo en minúsculas
			write(1, "_", 1); //y me escribes un _
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}