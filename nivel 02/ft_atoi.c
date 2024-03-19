int	ft_atoi(const char *str)
{
	int	result;//almacenar el resultado
	int	sign;//para los negativos
	int	i;//contador

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
	{//si hay espacios, signos, tabuladores, etc, sigue sumando
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{//si es un signo
		if (str[i] == '-')
			sign = -sign;//si es negativo conviértelo en negativo
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{//si es un número. Ejm: 123
	//result es 0 | así que 0 * 10 es 0 | más 1 - '0' = 1
	//result es 1 | 1 * 10 = 10 | + 2 - '0' que es 2 = 12
	//result es 12 | 12 * 10 = 120 | + 3 - '0' es 3 | = 123
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
#include <studio.h>
int	main(void)
{
	const char *str = "   -----+---+1234ab567";
	int number = ft_atoi(str);
	printf("%d\n", number);
	return (0);
}
*/