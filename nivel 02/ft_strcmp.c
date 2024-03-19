#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i]) //necesitamos pasarlo a unsigned char por especificaciones técnicas
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1 = "abc";
	char	*s2 = "abc";

	printf("%i\n", ft_strcmp(s1, s2));
	return (0);
}

Devuelve positivo si s1 es mayor que s2
Devuelve 0 si s1 y s2 son iguales
Devuelve negativo si s1 es menor que s2*/