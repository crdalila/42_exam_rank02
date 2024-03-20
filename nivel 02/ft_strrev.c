#include <stdio.h>

char *ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < (len - 1))//por el nulo final
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "Hello World";
	/*Si lo declaramos como char *str, da bus error
	porque hay que declararlo como un array (reserva memoria para guardar el string)
	y no como una cadena literal. Si una cadena no está guardada,
	no se puede modificar a placer
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
Esta función no crea una nueva cadena invertida,
sino que invierte la cadena que ya nos dan.*/