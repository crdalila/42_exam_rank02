int		max(int* tab, unsigned int len)
{
	unsigned int	i;//contador para movernos por el array
	unsigned int	count;//contador para llegar al len
	unsigned int	result;//donde almacenamos el número más grande

	if (len < 0)//si no hay contenido en el array, error
		return (0);
	i = 0;
	count = 0;
	result = 0;
	while (count < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
		count++;
	}
	return (result);
}

/*#include <stdio.h>

int main()
{
	int int_tab[] = {1, 3, 2, 10, 9};
	printf("%d", max(int_tab, 5));
}
lo primero es un array de números
lo segundo el número de elemtnos del array*/